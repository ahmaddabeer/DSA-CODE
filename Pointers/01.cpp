/*Object: what is out pur of this code

    int a = 5;
    int *p = &a;
    int **q = &p;


    cout << *p << endl;
    cout << **q << endl;
    cout << p<< endl;
    cout << *q << endl;


    */

#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int a = 5;
    int *p = &a;
    int **q = &p;

    cout << *p << endl;  // 5
    cout << **q << endl; // 5
    cout << p << endl;   // a ka addres ja value store ha
    cout << *q << endl;  // a ka add aye ga
    cout << (&a) << endl;  // a ka add aye ga
}
