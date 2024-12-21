// Day:1 Date:21-12-2024
// Task2-GCD
// https://www.geeksforgeeks.org/problems/gcd-of-two-numbers3459/1
#include<iostream>
using namespace std;
class Solution {
  public:
    int gcd(int a, int b) {
        if(a==0) return a;
        if(b==0) return b;
        while(b!=0){
            int rem=a%b;
            a=b;
            b=rem;
        }
        return a;
    }
};
//Time complexity- O(log(min(a,b)))
//Space complexity- O(1)