#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll tt;
    cin>>tt;
    while(tt--){
        ll n;
        vector<ll>arr(n);
        for(ll i=0; i<n; i++){
            cin>>arr[i];
        }
        ll count=0;
        vector<ll>a;
        for(ll i=0; i<n; i++){
            for(ll j=i+1; j<n; j++){
                if(arr[i]<arr[j] && arr[i]>0 && arr[j]>0){
                    count++;
                    
                }
                else if(arr[i]>arr[j] && arr[j]<0){
                    a.push_back(count);
                    
                    
                }

                else{
                    a.push_back(count);
                }
            }
            
        }

    }
}