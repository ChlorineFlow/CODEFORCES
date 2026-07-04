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
        int posi = count(arr.begin(), arr.end(), 1);
        int neg = count(arr.begin(), arr.end(), -1);
        if(neg==0){
            cout<<0<<endl;
            continue;
        }
        int count=0;
        if(posi<neg){
            count=((n+1)/2)-posi;
            neg=neg-count;
            if(neg%2==0){
                cout<<count<<endl;
                continue;
            }
            else{
                count++;
                cout<<count<<endl;
                continue;
            }
        }
        else{
            if(neg%2!=0){
                count++;
                cout<<count<<endl;
                continue;
            }
            cout<<0<<endl;
        }
        
    }
}