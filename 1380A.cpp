#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll tt;
    cin>>tt;
    while (tt--){
        ll n;
        cin>>n;
        vector<ll>arr(n);
        for(ll i=0; i<n; i++){
            cin>>arr[i];
        }
        ll idx = max_element(arr.begin()+1, arr.end()-1) - arr.begin();
        
        bool flag = arr[idx-1]<arr[idx] && arr[idx]>arr[idx+1];
        if(flag){
            cout<<"yes"<<endl;
            cout<<idx<<" "<<idx+1<<" "<<idx+2<<endl;
        }
        else{
            cout<<"no\n";
        }
    }
}