#include<bits/stdc++.h>
using namespace std;
#define int long long
int check(int n){
    int count=0;
    for(int i=1; i<=n; i++){
        vector<int> v;
        int r=0;
        int ii=i;
        while(ii!=0){
            r=ii%10;
            if(r!=0){ 
                v.push_back(r);
            }
            ii=ii/10;

        }
        if(v.size()==1)count++;


    }
    return count;
}
int32_t main(){
    int tt;
    cin>>tt;
    while(tt--){
        int n;
        cin>>n;
        cout<<check(n)<<endl;
    }


}