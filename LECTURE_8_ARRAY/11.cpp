// Object: write a program in c++ to print all the unique values in an array.
// DATE:07|11|2024
#include <iostream>
using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans = 0;
        for(int val: nums){
            ans = ans^val;
        }
        return ans;
        
    }
};


