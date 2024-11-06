// same as pahle wale qustion ke tarah "07" but isme ham 2 pointer approach ka  use kare gay
//  Object : Write a program in c++ to Reverse an Array usign 2 pointer approach .
// DATE: 07|11|2024
#include <iostream>
using namespace std;
void reverseArray(int arr[], int sz)
{
    int start = 0, end = sz - 1;
    while (start < end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}
int main()
{
    int arr[] = {1,2,3,4,5,6,7,8,9,10,11,22,33};
    int sz=13;
    reverseArray(arr, sz);
    for (int i = 0; i < sz; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}