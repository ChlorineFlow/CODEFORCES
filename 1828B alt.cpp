#include<bits/stdc++.h>
using namespace std;
int main(){
    long long tt;
    cin>>tt;
    while(tt--){
        long long n;
        cin>>n;
        vector<long long>arr(n);
        for(int i=0;i <n; i++){
            cin>>arr[i];
        }
        
        vector<long long>arr2;
        for(int i=0; i<n; i++){
            arr2.push_back(abs(arr[i]-(i+1)));
        }
        long long gcd_all = arr2[0];
        for(int i=0; i<arr2.size(); i++){
            gcd_all = __gcd(gcd_all, arr2[i]);
        }
        cout<<gcd_all<<endl;
    }
}
