#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll tt;
    cin>>tt;
    while(tt--){
        ll n;
        cin>>n;
        vector<ll>arr;
        if(n%2==0){
            for(int i=0; i<n; i++){
                arr.push_back(i+1);
            }
            for(int i=n; i>0; i--){
                // int j=n;
                arr.push_back(i);
                // j--;
            }
            for(int i=0; i<n; i++){
                arr.push_back(i+1);
            }
            for(int i=0; i<n; i++){
                arr.push_back(i+1);
            }
        }
        else{
            for(int i=0; i<n; i++){
                arr.push_back(i+1);
            }
            for(int i=0; i<n; i++){
                if(i==0){ 
                    arr.push_back(n);
                }
                else{
                    arr.push_back(i);
                }
            }
            for(int i=0; i<n; i++){
                arr.push_back(i+1);
            }
            for(int i=0; i<n; i++){
                arr.push_back(i+1);
            }
        }
        for(int i=0; i<n*4; i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;

    }
}