/*
    CS1 - File IO Lab

    Updated by: Jason West
    Date: 20240409

    The program reads numbers from a file and finds statistical values from those numbers.
    Lab demonstrates the file io and vector application. 
    Statistical value's definitions for mean, median, mode, etc. can be found here: https://www.purplemath.com/modules/meanmode.htm
*/

#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <cassert>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

const float EPSILON = 1e-4; //accuracy upto 4 decimal points

// function prototypes
void readData(vector<int> &, const string);
int findMax(const vector<int> &);
int findMin(const vector<int> &);
float findMean(const vector<int> &); // average
int findRange(const vector<int> &);
float findMedian(vector<int>);
// bonus implement findMode function
int findMode(const vector<int> &);

void writeData(const vector<int> & numbers);
void test();

int main(int argc, char* argv[]) {
    if (argc == 2 && string(argv[1]) == "test") {
        test();
        return 0;
    }
    vector<int> numbers;
    string inFile;
    cout << "Enter input file name: ";
    getline(cin, inFile);
    // inFile = "input.txt";
    readData(numbers, inFile);
    writeData(numbers);
    cout << "All done. Enter to exit...";
    cin.get();
    return 0;
}

void readData(vector<int> & numbers, const string inputFileName) {
    ifstream file;
    file.open(inputFileName, file.in | file.binary | file.ate);

    if (!file.is_open()) 
        cout << "failed to open " << inputFileName << '\n';
    else {
        file.seekg(0, file.beg);
        string word;
        while(getline(file, word)) {
            // cout << word << endl;
            numbers.push_back(stoi(word));
        }
        // for(int i: numbers)
        //     cout << i << endl;
        file.close();
    }
}

void writeData(const vector<int> & numbers) {
    // FIXME4
    /*
    Algorithm steps:
    1. Prompt user to enter output file name
    2. Store and use the file name to open the file in write mode
    3. Write output as shown in output.txt file with proper formatting using iomanip
    */
    string outFile;
    cout << "Enter output file name: ";
    getline(cin, outFile);
    // outFile = "output.txt";

    ofstream fout;
    fout.open(outFile);
    fout << "List of Numbers: ";
    for(int i: numbers)
        fout << i << " ";
    fout << endl << endl;
    fout << setw(40) << setfill('=') << " " << endl;
    fout << setw(10) << setfill(' ') << " " << "Statistical Results" << setfill(' ') << endl;
    fout << setw(40) << setfill('=') << " " << endl;
    // fout << setw(25) << left << "Item" << setw(25) << right << "Price" << endl;
    fout << "Max";
    fout << setw(5) << setfill(' ') << " "  << "Min";
    fout << setw(5) << setfill(' ') << " "  << "Mean";
    fout << setw(5) << setfill(' ') << " "  << "Median"; 
    fout << setw(5) << setfill(' ') << " "  << "Range"; 
    fout << endl;
    
    fout << findMax(numbers);
    fout << setw(5) << setfill(' ') << " "  << findMin(numbers);
    fout << setw(5) << setfill(' ') << " "  << floor(findMean(numbers) * 100) / 100;
    fout << setw(5) << setfill(' ') << " "  << findMedian(numbers); 
    fout << setw(5) << setfill(' ') << " "  << findRange(numbers); 
    fout << endl;
}

int findMax(const vector<int> & nums) {
    int max = nums[0];
    for(int n: nums)
        max = (n>max) ? n : max;
    return max;
}

int findMin(const vector<int> & nums) {
    int min = nums[0];
    for(int n: nums) {
        if(n < min)
            min = n;
        else
            min = min;
        min = (n < min) ? n : min;
    }
    // FIXME5 - implement function to find and return min value from nums vector
    return min;
} 

float findMean(const vector<int> & nums) {
    // same as average
    long long int sum = 0;
    for(int n: nums)
        sum += n;
    return sum/float(nums.size());
}

int findRange(const vector<int> & nums) {
    // FIXME6 - implement function that finds and returns the range value
    // range = max - min
    int range = findMax(nums) - findMin(nums);
    return range;
}

float findMedian(vector<int> nums) {
    sort(nums.begin(), nums.end());
    float median;
    if (nums.size() % 2 == 0) {  // even set
        median = (nums[nums.size()/2] + nums[nums.size()/2-1])/float(2);
    } else { // odd set
        median = nums[nums.size()/2];
    }
    return median;
}

void test() {
    vector<int> numbers = {100, 10, 5, 0, -99, 10, 99};
    //cout << findMean(numbers) << " " << findMean(numbers)-17.857142 << endl;
    assert(fabs(findMean(numbers)-17.857142) <= EPSILON );
    assert(findMax(numbers) == 100);
    assert(findMedian(numbers) == 10);
    vector<int> numbers1 = {10, 10, 10, 0, -10, -10};
    assert(fabs(findMean(numbers1) -1.6667) <= EPSILON  );
    assert(findMax(numbers1) == 10);
    assert(findMedian(numbers1) == 5);
    // FIXME7: Write at least two test cases for other functions

    cerr << "all test cases passed!\n";
}