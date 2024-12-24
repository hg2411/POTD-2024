//Day-4 Date-24-12-2024
//Task2-Pangram Problem
//https://codeforces.com/contest/520/submission/298132243

#include<iostream>
#include<algorithm>
#include<set>
#include<string>
using namespace std;

int main(){
    int n;
    cin>>n;
    cout<<endl;
    string s;
    cin>>s;

    set<char> letters;
    for(char c:s){
        letters.insert(tolower(c));
    }
    if(letters.size()==26)
        cout<<"YES"<<endl;
    else 
    cout<<"NO"<<endl;
    return 0;
}
//Time Complexity is O(n)
//Space Complexity is O(1)