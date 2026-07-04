#include<bits/stdc++.h>
using namespace std;
int main(){
    long long tt;
    cin>>tt;
    while(tt--){
        string s;
        cin>>s;
        long long n=s.size();
        if(s[0]==s[n-1]){
            cout<<s<<endl;
        }
        else{
            if(s[0]=='a'){
                s[0]='b';
                cout<<s<<endl;
            }
            else{
                s[0]='a';
                cout<<s<<endl;
            }
        }
    }
}