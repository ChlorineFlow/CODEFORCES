#include<bits/stdc++.h>
using namespace std;
int main(){
    int tt;
    cin>>tt;
    while(tt--){
        int n;
        cin>>n;
        vector<int>arr(n);
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        int x=n+1;
        for(int i=0; i<n; i++){
            cout<<x-arr[i]<<" ";
        }
        cout<<"\n";
    }
}