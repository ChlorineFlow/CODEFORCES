#include<bits/stdc++.h>
using namespace std;
int main(){
    int tt;
    cin>>tt;
    while(tt--){
        int n,a,b;
        cin>>n>>a>>b;
        if((n==a && a==b)||(a == n && b == n)){
            cout<<"yes\n";
        }
        else if(a+b+2<=n){
            cout<<"yes\n";
        }
        else{
            cout<<"no\n";
        }

    }
}