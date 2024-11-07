// Object: Write a program in c++ to print Maximum Subarray Sum.
// DATE:07|11|2024
// TIME: 11:39PM
#include <iostream>
#include <climits>
using namespace std;
int main()
{

    int n = 5;
    int arr[] = {1, 2, 3,4, 5};

    int maxSum = INT_MIN;
    for (int st = 0; st < n; st++)
    {
        int currSum = 0;
        for (int end = st; end < n; end++)
        {
            currSum += arr[end];
            maxSum = max(currSum, maxSum);
        }
    }
    cout << "max subarray sum =" << maxSum << endl;
    return 0;
}
//this is a Brute force Approach
