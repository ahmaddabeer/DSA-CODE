#include <iostream>
#include <vector>
using namespace std;
int main()
{
   vector<int> vec;
   vec.push_back(0);
   vec.push_back(1);
   vec.push_back(2);
   vec.push_back(3);
   vec.push_back(5);
   vec.push_back(6);
   vec.push_back(7);
   vec.push_back(8);// yaha tak capacity thi ab jase hi new element add kare gay to capacity bar kar 8 se 16 ho gai 
   vec.push_back(9);

   cout <<"size of vector is =" <<vec.size()<<endl;//9
   cout <<"size of capacity is =" <<vec.capacity()<<endl;//16


}
