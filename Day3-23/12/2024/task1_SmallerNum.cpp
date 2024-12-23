//Day:3 Date:23-12-2024
//Task2: How Many Numbers Are Smaller Than the Current Number
//https://leetcode.com/problems/how-many-numbers-are-smaller-than-the-current-number/

#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        int n=nums.size();
        vector<int> arr(n,0);
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(nums[j]<nums[i])
                arr[i]++;
            }  
        }
        return arr;
    }
};
//Time complexity is O(N^2)
//Space complexity is O(n)