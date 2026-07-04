#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll tt;
    cin>>tt;
    while(tt--){
        ll n;
        cin>>n;
        vector<ll>arr(n);
        vector<ll>sellect;
        for(ll i=0; i<n; i++){
            cin>>arr[i];
        }
        for(ll i=n-1; i>=0; i--){
            ll j=i;
            if(arr[j]>0){
                sellect.push_back(j);
                while(j>=0){
                    arr[j]*=-1;
                    j--;
                }
            }
        }
        cout<<sellect.size()<<endl;
        for(ll i=0; i<sellect.size(); i++){
            cout<<sellect[i]+1<<" ";
        }
        cout<<endl;
    }
}