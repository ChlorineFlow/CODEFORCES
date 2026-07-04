#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll tt;
    cin>>tt;
    while(tt--){
        ll n,x;
        cin>>n>>x; 
        vector<ll>arr(n);
        for(ll i=0; i<n; i++){
            cin>>arr[i];
        }
        ll sum=accumulate(arr.begin(), arr.end(), 0LL);
        ll min = (sum + x - 1)/x;
        ll max=0;
        for(int i=0; i<n; i++){
            max+=(arr[i] + x - 1) / x;
        }
        cout<<min<<" "<<max<<endl;

    }
}