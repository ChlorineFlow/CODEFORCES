#include<bits/stdc++.h>
using namespace std;
int main(){
    int tt;
    cin>>tt;
    while(tt--){
        int n,k;
        cin>>n>>k;
        vector<int>arr(n);
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        sort(arr.begin(),arr.end());
        int count=0;
        int mx = 0;
        for(int i=0; i<n-1; i++){
            if(k>=arr[i+1]-arr[i]){
                count++;
                mx = max(mx, count);
            }
            else{
                count=0;
            }
        }
        cout<<n-(mx+1)<<endl;
    }
}