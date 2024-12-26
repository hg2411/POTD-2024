//Day:6 Date:26-12-2024
//Task2:Trailing Zeros
//https://cses.fi/problemset/result/11552048/

#include<bits/stdc++.h>
using namespace std;

int trailingzeros(int n){
    int count=0;
    while(n>=5){
        count+=n/5;
        n/=5;
    }
    return count;
}
int main(){
    int n;
    cin>>n;
    cout<<trailingzeros(n);
}
//Time Complexity is O(log5(n))
//Space Complexity is O(1)