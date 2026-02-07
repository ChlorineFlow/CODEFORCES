#include <bits/stdc++.h>
using namespace std;

int main(){
    int tt;
    cin>>tt;
    while(tt--){
        int n;
        cin>>n;
        vector<int> a(n);
        vector<int> b(n);
        for(int i=0;i<n;i++) cin>>a[i];
        for(int i=0;i<n;i++) cin>>b[i];
        
        int diff = INT_MIN;
        int idx = -1;
        for(int i=0;i<n;i++){
            if(b[i]>a[i] && (b[i]-a[i])>diff){
                diff = b[i] - a[i];
                idx = i;
            }
        }
        if(idx == -1) cout<<"YES"<<endl;
        else{
            for(int i=0;i<n;i++){
                if(i != idx) a[i] -= diff;
                else a[i] += diff;
            }
            
            int flag = 0;
            for(int i=0;i<n;i++){
                if(a[i]<b[i]){
                    flag = 1;
                    break;
                }
            }
            
            if(flag == 0) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
    }
    return 0;
}