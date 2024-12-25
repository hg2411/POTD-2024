//Day:5 Date:25-12-2024
//Task1:Assign Cookies
//https://leetcode.com/problems/assign-cookies/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int n=g.size();
        int m=s.size();
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        int count=0,i=0,j=0;
        while(i<n&&j<m){
            if(s[j]>=g[i]){
                count++;
                i++;
            }
            j++;
        }
        return count;
    }
};
//Time Complexity is O(nlogn+mlogm)
//Space Complexity is O(1)