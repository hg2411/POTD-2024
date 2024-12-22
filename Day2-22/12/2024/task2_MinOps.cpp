//Day:2 Date:22/12/2024
//Task-2
//https://leetcode.com/problems/find-minimum-operations-to-make-all-elements-divisible-by-three/

#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int n=nums.size();
        int count=0;
        int a;
        for(int i=0;i<n;i++){
            if(nums[i]%3==0) continue;
            a=nums[i]%3;
            count=count+min(a,3-a);
        }
        return count;
    }
};
// Time Complexity is O(n)
// Space Complexity is O(1)