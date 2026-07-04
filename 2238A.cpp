#include<bits/stdc++.h>
using namespace std;
int main(){
    int tt;
    cin>>tt;
    while(tt--){
        int n,c;
        cin>>n>>c;
        vector<int>a(n);
        vector<int>b(n);
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        for(int i=0; i<n; i++){
            cin>>b[i];
        }
        int count=0;
        bool flag=false;
        for(int i=0; i<n; i++){
            if(a[i]<b[i]){
                count=c;
                sort(a.begin(),a.end());
                sort(b.begin(),b.end());
                flag=true;
                break;
            }
            else{
                count=count+(a[i]-b[i]);
            }
        }
        if(flag){
            for(int i=0; i<n; i++){
                if(a[i]>=b[i]){
                    count=count+(a[i]-b[i]);
                }
                else{
                    count=-1;
                    break;
                }
            }
        }
        cout<<count<<endl;
    }
}