//Day:2 Date:22/12/2024
//Task-1
//https://leetcode.com/problems/single-number/

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
public:
    int singleNumber(vector<int>& nums) {
    //    int n=nums[0];
    //    for(int i=1;i<nums.size();i++){
    //     n=n^nums[i];
    //     }
    //      return n;
        int n=nums.size();
        sort(nums.begin(),nums.end());
        for(int i=0;i<n-1;i++){
            if(nums[i]==nums[i+1]){ 
            i++;
            }
            else return nums[i];
        }
        return nums[n-1];
    }
};
//Time Complexity is O(nlogn)
//Space Complexity is O(1)