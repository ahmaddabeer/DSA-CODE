// Object: Write a program in c++ to display smallest value and greatest valus in given array.
// DATE: 06|11|2024
#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int num[] = {2, -23, 34, 45, 90, 344};
    int size = 6;
    int smallest = INT_MAX;
    int greatest = INT_MIN;
    for (int i = 0; i < size; i++)
    {
        smallest = min(num[i], smallest);
        greatest = max(num[i], greatest);
    }
    cout << "Smallest value is =" << smallest << endl;
    cout << "greatest value is = " << greatest << endl;
    return 0;
}