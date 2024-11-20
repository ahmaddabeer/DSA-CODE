#include <iostream>
using namespace std;
int main(){
    int arr[]={10,20,30,40};
    int* alpha = arr;

    cout <<*(alpha +1)<<endl;
    cout <<*(alpha +3)<<endl;
    alpha++;
    cout <<*alpha <<endl;
}ko