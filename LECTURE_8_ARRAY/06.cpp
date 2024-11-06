// Object : Write a Program in c++ to find the position of given value of arr
//  DATE: 06|11|2024
#include <iostream>
using namespace std;
int linearSearch(int arr[], int sz, int target)
{
    for (int i = 0; i < sz; i++)
    {
        if (arr[i] == target)
        { // FOUND
            return i;
        }
    }
    return -1; // NOT FOUND
}

int main()
{
    int arr[] = {4, 2, 7, 8, 34, 35, 34};
    int sz = 7;
    int target = 34;
    cout << linearSearch(arr, sz, target) << endl;
    return 0;
}
