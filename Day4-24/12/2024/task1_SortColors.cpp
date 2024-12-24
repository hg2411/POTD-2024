//Day-4 Date-24-12-2024
//Task1-Sort Colors
//https://leetcode.com/problems/sort-colors/description/

#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    void sortColors(vector<int>& nums) {
        // Brute Approach
        // Time Complexity is O(nlogn)
        // Space Complexity is O(1)
        // sort(nums.begin(),nums.end());

        // Count Sort Approach
        // Time Complexity is O(n)
        // Space Complexity is O(1)
        // int n=nums.size();
        // int r=0,w=0,b=0;
        // for(int i=0;i<n;i++){
        //     if(nums[i]==0) r++;
        //     else if(nums[i]==1) w++;
        //     else b++;
        // }
        // for(int i=0;i<r;i++){
        //     nums[i]=0;
        // }
        // for(int i=r;i<r+w;i++){
        //     nums[i]=1;
        // }
        // for(int i=r+w;i<r+w+b;i++){
        //     nums[i]=2;
        // }

        // Optimal Solution // Dutch National Flag Algorithm
        // Time Complexity is O(n)
        // Space Complexity is O(1)
        int n=nums.size();
        int low=0,mid=0,high=n-1;
        while(mid<=high){
            if(nums[mid]==0){
                swap(nums[low],nums[mid]);
                low++,mid++;
            }
            else if(nums[mid]==1) mid++;
            else{
                swap(nums[high],nums[mid]);
                high--;
            }
        }
    }
};
