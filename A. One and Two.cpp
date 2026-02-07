#include<bits/stdc++.h>
using namespace std;
int main(){
    int tt;
    cin>>tt;
    while(tt--){
        int n;
        cin>>n;
        vector<int>arr(n);
        for(int i=0; i<n; i++)cin>>arr[i];
        int two=0;
        for(int i=0; i<n; i++){
            if(arr[i]%2==0)two++;
        }
        int count=0;
        int req=two/2;
        if(two%2!=0)cout<<-1<<endl;
        else if(two==0)cout<<1<<endl;
        else{
            for(int i=0; i<n; i++){
                if(arr[i]==2)count++;
                if(count==req){
                    cout<<i+1<<endl;
                    break;
                }
            }
        }
    }
}