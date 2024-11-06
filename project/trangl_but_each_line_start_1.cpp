#include <iostream>
using namespace std;
int main()
{
    int n = 6;
    char ch = 'a';
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j < i + 1; j++)
        {
            cout << ch + j << " ";
            ch++;
        }
        cout << endl;
    }
}