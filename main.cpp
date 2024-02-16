// Kylen and Grace
#include <iostream>
#include <cstdlib>
#include <vector>
#include "stringdata.cpp"

using namespace std;

int linear_search(vector<string> data, string element){
    int n = 0;
    for (string value : data){
        if (value == element)
            return n;
        n++;
    }
}

int binary_search(vector<string> data, string element){
    int min = 0;
    int max = data.size() - 1;
    while (min <= max){
        int mid = (min + max) / 2;
        string myData = data[mid];
        if (element < myData){
            max = mid-1;
        } else if (element > data[mid]) {
            min = mid + 1;
        } else {
            return mid;
        }

        return -1;


    }
}

int main()
{
    int data = stringdata.get_data();
    vector<string> checks = {"not_here", "mzzz", "aaaaa"};
    for (str i : checks)
        cout << "Testing Linear Search for: " << i;
        int index = linear_search(data, i);

        if (index == -1)
        {
            cout << i << "not found";
        } else {
            cout << i << "found at" << index;
        }

        cout << "Testing Binary Search for: " << i;
        int indexBinary = binary_search(data, i);

        if (indexBinary == -1){
            cout << i << "not found";
        }
        else {
            cout << i << "found at " << index;
        }


    return 0;
}


