#include <iostream>
#include <vector>
using namespace std;
int main(){
    int a = 10;
    int* alpha = &a;
    int** bita = &alpha;
    cout <<*&a<<endl;
    cout <<*alpha<<endl;
    cout <<**bita<<endl;//10




}
