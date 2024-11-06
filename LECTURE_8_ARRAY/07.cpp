// Object: Write a program in c to reverser an array
// DATE: 06|11|2024
#include <iostream>
using namespace std;
int main()
{
    int arr[] = {1, 2, 3, 44, 33, 34, 3};
    swap(arr[0], arr[6]);
    swap(arr[1], arr[5]);
    swap(arr[2], arr[4]);
    for (int i = 0; i < 7; i++)
    {
        cout << arr[i] << " "; // array ke elements ko print kar rahe hain
    }
}