#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll n;
    cin>>n;
    ll count=0;
    while(n--){
        ll p,q;
        cin>>p>>q;
        ll left=abs(p-q);
        if(left>=2){
            count++;
        }
    }
    cout<<count<<endl;
}