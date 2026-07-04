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
        int count=0;
        int i=0;
        while(i<n-1){
            if(arr[i]>=arr[i+1]){
                count+=arr[i];
                i++;
            }
            else{
                count+=arr[i];
                arr[i+1]=arr[i];
                i++;
            }
        }
        count+=arr[n-1];
        cout<<count<<endl;
    
    }
}