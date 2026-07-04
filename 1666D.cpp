#include <bits/stdc++.h>
using namespace std;
int main(){
    long long tt;
    cin >> tt;
    while (tt--){
        string s;
        cin>>s;
        int pos= s.find(' ');
        string a= s.substr(0, pos);
        string b= s.substr(pos + 1);
        if(a==b){
            cout<<"yes"<<endl;
            continue;
        }
        int x=0;
        bool flag=false;
        for(int i=0; i<a.size(); i++){
            if(a[i]==b[0]){
                x=i;
                flag=true;
                break;
            }
        }
        if(flag=false){
            cout<<"no"<<endl;
            
        }

        
    }
}