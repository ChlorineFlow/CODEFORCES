#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll tt;
    cin>>tt;
    while(tt--){
        string s;
        cin>>s;
        int ones = count(s.begin(), s.end(), '1');
        int zeros = count(s.begin(), s.end(), '0');
        if(min(ones,zeros)%2==0){
            cout<<"NET\n";
        }
        else{
            cout<<"DA\n";
        }

    }
}