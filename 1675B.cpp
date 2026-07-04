#include<bits/stdc++.h>
using namespace std;
int main(){
    long long tt;
    cin>>tt;
    while(tt--){
        long long n;
        cin>>n;
        vector<int>arr(n);
        for(long long i=0; i<n; i++){
            cin>>arr[i];
        }
        if(n==1){
            cout<<0<<endl;
            continue;
        }
        long long count=0;
        bool flag=true;
        for(long long j=n-1; j>=1; j--){
            if(arr[j]==0){
                cout<<-1<<endl;
                flag=false;
                break;

            }
            if(arr[j]<=arr[j-1]){
                while(arr[j]<=arr[j-1]){
                    arr[j-1]=arr[j-1]/2;
                    count++;
                    if(arr[j-1]==0 && j-1!=0){
                        cout<<-1<<endl;
                        flag=false;
                        break;
                    }
                }
            }
            if(!flag) break;
        }
        if(flag){
            cout<<count<<endl;
        }
    }
}