#include<bits/stdc++.h>
using namespace std;
int main(){
    int tt;
    cin>>tt;
    while(tt--){
        string s;
        int n,k;
        cin>>n>>k;
        cin>>s;
        map<char, int> freq;
        for(char ch : s){
            freq[ch]++;
        }
        int evenCnt = 0;
        int oddCnt = 0;
        for(auto it : freq){
            if(it.second % 2 == 0)
                evenCnt++;
            else
                oddCnt++;
        }
        if(k>=oddCnt-1)cout<<"yes\n";
        else{
            cout<<"no\n";
        }
    } 
}