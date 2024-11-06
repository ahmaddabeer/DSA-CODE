#include <iostream>
using namespace std;

bool isPowerOfTwo(int n)
{
    return (n > 0) && ((n & (n - 1)) == 0);
}

int main()
{
    int n;
    cout << "Enter a number: " << endl;
    cin >> n;

    if (isPowerOfTwo(n))
    {
        cout << n << " is a power of 2." << endl;
    }
    else
    {
        cout << n << " is not a power of 2." << endl;
    }

    return 0;
}
