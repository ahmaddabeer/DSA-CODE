#include <iostream>
using namespace std;

// qustiion: Calculate nCr binomial coefficient for n & r

// first find n!
int factorial(int n)
{
    int fact = 1;
    for (int i = 1; i < n; i++)
    {
        fact *= i;
    }
    return fact;
}

int nCr(int n, int r)
{
    int fact_n = factorial(n);
    int fact_r = factorial(r);
    int fact_nmr = factorial(n - r);
    return fact_n / (fact_r * fact_nmr);
}

int main()
{
    int n = 29, r = 5;
    // ncr= n!/r! (n-r)!
    cout << nCr(n, r) << endl;
    return 0;
}
