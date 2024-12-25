//Day:5 Date:25-12-2024
//Task2:750A
//https://codeforces.com/problemset/problem/750/A

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int min;
    cin>>min;
    int count=0;
    int time=240-min;
    // int sum=(n/2)*(10+(n-1)*5);
    int sum=0;
    for(int i=1;i<=n;i++){
        sum=sum+5*i;
        if(sum<=time)
        count++;
        else break;
    }
    cout<<count;
}
//Time complexity is O(n)
//Space complexity is O(1)