#include <iostream>
using namespace std;

int  main(){
    
    int a = 10;
    int* alpha = &a;
    alpha++;
    cout<< alpha<<endl;
}