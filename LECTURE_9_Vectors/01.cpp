#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<char> vec = { 'a', 'b', 'c','c', 'd'};

    cout <<"size = " << vec.size()<<endl;// ise ham size nikalte ha vector ka

    for (char val : vec)// This is syntax for each loop
    {
        cout << val << endl;
    }
    return 0;
}
