#include <iostream>
#include <vector>
using namespace std;

int main()
{

    int bb[] = {3334343, 33, 3, 4, 5};

    cout << *(bb + 1) << endl;
    cout << *(bb + 2) << endl;
    cout << *(bb + 3) << endl;
    cout << *(bb + 5) << endl;
}