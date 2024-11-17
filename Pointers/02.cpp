#include <iostream>
using namespace std;
void changeA(int* alpha){//pass by  reference using pointer
    *alpha = 30;

}
int main(){
    int a = 10;
    changeA(&a);
    cout<<"inside main fix : "<< a <<endl; //20
    
    
}