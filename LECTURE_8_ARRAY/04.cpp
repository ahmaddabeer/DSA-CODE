//Object : Write a program in c++ to display index of samllest or largest value store in array

//matlab jaha par value store ha greatest or smallest vlue us ki location batani ha kon si position ha 

//DATE:06|11|2024
// #include <iostream>
// #include <climits>
// using namespace std;
// int main(){
    
//     // int num[]={2,3,4,44,-4,56};
//     // int size=6;
//     // int smallest = INT_MAX;
//     // int greatest = INT_MIN;
//     // for(int i = 0; i<sze; i++){

        
        
//     // }

//     int num[]={1,2,3};
//     cout <<sizeof(num);


#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Array ki size daalein: ";
    cin >> n;

    int arr[n];
    cout << "Array ke elements daalein: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int maxIndex = 0, minIndex = 0;

    // Loop to find largest and smallest
    for(int i = 1; i < n; i++) {
        if(arr[i] > arr[maxIndex]) {
            maxIndex = i;  // Update index of largest element
        }
        if(arr[i] < arr[minIndex]) {
            minIndex = i;  // Update index of smallest element
        }
    }

    cout << "Sabse bada element ka index: " << maxIndex << endl;
    cout << "Sabse chhota element ka index: " << minIndex << endl;

    return 0;
}




