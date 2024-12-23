//Day:3 Date:23-12-2024
//Task2-Minimum Moves to Convert String
//https://leetcode.com/problems/minimum-moves-to-convert-string/

#include<iostream>
#include<string>
using namespace std;

class Solution {
public:
    int minimumMoves(string s) {
    int n=s.size();
    int move=0;
    int i=0;
       while(i<n){
        if(s[i]=='X'){
        move++;
        i+=3;
        }
        else
         i++;
       }
       return move;
    }
};
//Time complexity is O(n)
//Space complexity is O(1)