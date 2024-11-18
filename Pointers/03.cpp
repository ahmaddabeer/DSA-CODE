#include <iostream>
using namespace std;

int  main(){
    int a = 10;
    int* alpha = &a;
    cout << alpha <<endl;//before 
    alpha = alpha +2;//isme ham nahi add kar rahe balki ham 2 interger ke barabar memori add kar rhe ah 8 byte
    cout <<alpha <<endl;//After
}