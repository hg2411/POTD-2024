//Day:6 Date:26-12-2024
//Task1:Number of Laser Beams in a Bank
//https://leetcode.com/problems/number-of-laser-beams-in-a-bank/submissions/1490774822/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int n=bank.size(),prev=0,curr=0,sum=0;
        for(int i=0;i<n;i++){
            curr=count(bank[i].begin(),bank[i].end(),'1');
            if(curr>0){
                sum+=prev*curr;
                prev=curr;
            }
        }
        return sum;
    }
};
//Time complexity is O(m*n)
//Space complexity is O(1)