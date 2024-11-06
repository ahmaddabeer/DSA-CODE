#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<char> vec = { 'a', 'b', 'c', 'd'};
    for (char val : vec)// This is syntax for each loop
    {
        cout << val << endl;
    }
    return 0;
}
