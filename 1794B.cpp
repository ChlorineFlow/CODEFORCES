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
            if(arr[i]==1)arr[i]++;
        }
        for(int i=0; i<n-1; i++){
            if(arr[i+1]%arr[i]==0){
                arr[i+1]++;
                if(i>0 && arr[i]==arr[i-1]){
                    arr[i]++;
                }
            }

        }
        for(int j=0; j<n; j++){
            cout<<arr[j]<<" ";
        }
        cout<<endl;

    }
}