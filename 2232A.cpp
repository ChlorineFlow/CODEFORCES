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
        sort(arr.begin(),arr.end());
        ll i=0;
        ll j=n-1;
        int mid=n/2; 
        int count=0;
        while(i<=j){
            if(arr[i]!=arr[mid]||arr[j]!=arr[mid]){
                count++;
                i++;
                j--;
            }
            else{
                break;
            }

        }
        cout<<count<<endl;
    }
}