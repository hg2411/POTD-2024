// Day:1 Date:21-12-2024
// Task2-String Score
// https://leetcode.com/problems/score-of-a-string/description/
#include<iostream>
using namespace std;
class Solution {
public:
    int scoreOfString(string s) {
        int n=s.size();
        int diff,sum=0;
        for(int i=0;i<n-1;i++){
            diff=abs(s[i]-s[i+1]);
            sum+=diff;
        }
        return sum;//time complexity is O(n) and space complexity is O(1)
    }
};