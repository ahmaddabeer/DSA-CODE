#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> vec;

    cout << "size = " << vec.size() << endl; // ise ham size nikalte ha vector ka
    vec.push_back(25);
    vec.push_back(33);
    vec.push_back(55);
    cout << vec.at(0) << endl; // iska use kar ke ham vector ki perticular element ko display kara sakte ha
    cout << vec.at(1) << endl;
    cout << vec.at(2);
}
