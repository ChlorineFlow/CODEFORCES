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
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        int count=0;
        for (int i=0; i<arr.size()-1; i++) {
            if(abs(arr[i]-arr[i+1])==__gcd(arr[i],arr[i+1])){
                count++;
            }
           
        }
        cout<<count<<endl;

    }
}