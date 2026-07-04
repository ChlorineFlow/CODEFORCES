#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll tt;
    cin>>tt;
    while(tt--){
        ll n,k;
        cin>>n>>k;
        string s;
        bool flag=true;
        for(int c=0; c<k; c++){
            int one=0;
            for(int i=c; i<n; i=i+k){
                if(s[i]=='1'){
                    one++;
                }
            }
            if(one%2!=0){
                cout<<"no\n";
                flag=false;
                break;
            }

        }
        if(flag){
            cout<<"yes\n";
        }
    }
}