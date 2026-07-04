#include<bits/stdc++.h>
using namespace std;
int main(){
    long long tt;
    cin>>tt;
    while(tt--){
        long long n;
        cin>>n;
        vector<long long>arr(n);
        long long cnt1=0;
        long long cnt0=0;
        for(int i=0; i<n; i++){
            cin>>arr[i];

        }
        for(long long i=0; i<n; i++){
            if(arr[i]==0){
                cnt0++;
            }
            else if(arr[i]==1){
                cnt1++;
            }
        }
        cout<<cnt1*(1LL<<cnt0)<<endl;
    }
}