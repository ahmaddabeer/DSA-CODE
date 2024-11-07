#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> vec ;

    cout <<"size = " << vec.size()<<endl;// ise ham size nikalte ha vector ka
    vec.push_back(25);
    vec.push_back(33);
    vec.push_back(55);
    cout << "After push back size = "<< vec.size()<<endl;
    vec.pop_back();//iske use se ham vector ke last se ak value ko delete kar sakte ha 


    cout <<vec.front()<<endl;// iska use kar ke ham pahli (front ) value display kara sakte ha vector ki 
    cout <<vec.back()<<endl;// iska use kar ke ham back(last) value display kara sakte ha vector ki 

   


    
    

    for (int val : vec)// This is syntax for each loop
    {
        cout << val << endl;
    }
    return 0;
}
