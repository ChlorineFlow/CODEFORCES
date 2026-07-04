#include<bits/stdc++.h>
using namespace std;
int main(){
    int tt;
    cin>>tt;
    while(tt--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int count=0;
        for(int i=0; i<n; i++){
            if(s[i]=='R'){
                count++;
            }
            else{
                count++;
                break;
            }
        }
        cout<<count<<endl;
    }
}