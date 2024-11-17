#include <iostream>
#include <vector>
using namespace std;
int main(){

    int price = 19999;
    int* alpha = &price;
    int** bita = &alpha;
    cout << &price<<endl;
    cout << alpha<<endl;
    cout << bita<<endl;
    int*** gama = &bita;
    cout <<gama<<endl;
    //ab gama ka adree kisi or ma store karate ha 
    int**** tita = &gama;
    cout << tita;
    

  
   

    return 0;

} 