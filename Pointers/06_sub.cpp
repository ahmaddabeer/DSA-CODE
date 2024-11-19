// cpp ma ptr1+ptr2 not possible 
#include <iostream>
using namespace std;
int main(){
    int arr[]= {1,2,3,4,5};
    int* alph2;
    int*alph1 = alph2+2;
    cout <<alph2<<endl;
    cout <<alph1<<endl;
    
    return 0;
}