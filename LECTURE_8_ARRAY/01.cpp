

#include <iostream>
using namespace std;

int main()
{
    int size;
    cout << "Array ka size batao: ";
    cin >> size; // Array size ko user input se lena

    int nums[size]; // Array declare karna

    // Array mein values store karna
    for (int i = 0; i < size; i++)
    {
        cout << "Element " << i + 1 << " ki value batao: ";
        cin >> nums[i];
    }

    // Array mein stored values print karna
    cout << "Array mein values hain: ";
    for (int i = 0; i < size; i++)
    {
        cout << nums[i] << " ";
    }
    cout << endl;

    return 0;
}
