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
        if(n==1){
            cout<<1<<endl;
        }
        else{
            for(int i=0; i<n; i++){
                cout<<2<<" ";
            }
            cout<<endl;
        }
    }
}