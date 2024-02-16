// Kylen and Grace
#include <iostream>
#include <cstdlib>
#include <vector>
#include "stringdata.cpp"

using namespace std;

int linear_search(int container, int element){
    return 0;
}

int binary_search(int container, int element){
    return 0;
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


