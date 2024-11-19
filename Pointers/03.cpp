#include <iostream>
using namespace std;
void bitaA(int *ptr)
{ // ths is a use fo pass by fererence
    *ptr = 3233;
}

int main()
{
    int a = 33;
    bitaA(&a);//ya se hamne a ka addres pass kar diya usb fuction ma change hoga to wo direct mare addres ma change ho ga 
    cout << "you expect the value of a is 33 but no : " << a << endl;
}
