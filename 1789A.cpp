#include<bits/stdc++.h>
#include <algorithm>
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
        int flag=0;
        for(int i=0; i<n-1; i++){
            for(int j=i+1; j<n; j++){
                if(__gcd(arr[i],arr[j])<=2){
                    flag=1;
                    break;
                }
            }
        }
        if(flag==1){
            cout<<"yes\n";
        }
        else{
            cout<<"no\n";
        }
    }
}