#include <iostream>
using namespace std;
void changeA(int a){//pass by value
a = 20;

}
int main(){
    int a = 10;
    changeA(a);
    cout<<"inside main fix : "<< a <<endl; //20
    
    
}