#include <iostream>
#include <climits>
using namespace std;
int main(){
    int num[]= { 92, 3 ,34 ,454, 55, 44, 34, 4};
    int size=7;
    int smallest= INT_MAX;
    for(int i = 0; i < size; i++){
      
        
        if(num[i]<smallest){
            smallest = num[i];
        }
        
    }
    cout << "smallest is = "<< smallest <<endl;
}
//if condition ke bajae ham (samllest = min(nums[i], smallest);) ka use kar sakte ha dona wahi kaam kar rahe ha min ma save ha ki min value dena ha in .