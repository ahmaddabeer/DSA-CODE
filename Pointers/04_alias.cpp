// ab jase pichle code ma dekha ki pass by refrence using pointer ki help se ham add ma apni man cahi value ko add kar sakte ha usi tarah ha ab alias pare gay
#include <iostream>
using namespace std;
void alias(int &b)//pass by reference using alias
{ // ya jo  ham b liye ha ye a ka dusra naam ha but ham baat a ki hi kar rahe ha
    b = 200;
}
int main()
{
    int a = 23;
    alias(a);
    cout << "you exepet the value of a is 23 but ans is no and the value of a is : " << a << endl;
}
