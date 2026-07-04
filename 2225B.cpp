#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll tt;
    cin>>tt;

    while(tt--){
        string s;
        cin>>s;

        ll aa=0;
        ll bb=0;
        ll aaa=0;
        ll bbb=0;

        int cntA = count(s.begin(), s.end(), 'a');
        int cntB = count(s.begin(), s.end(), 'b');

        for(ll i=0; i<s.size()-1; i++){

            if(i+2 < s.size()){
                if(s[i]=='a' && s[i+1]=='a' && s[i+2]=='a'){
                    aaa++;
                }
                else if(s[i]=='b' && s[i+1]=='b' && s[i+2]=='b'){
                    bbb++;
                }
            }

            if(s[i]=='a' && s[i+1]=='a'){
                aa++;
            }
            else if(s[i]=='b' && s[i+1]=='b'){
                bb++;
            }
        }

        if(bb==0 && aa==0){
            cout<<"yes\n";
        }
        else if(bb==1 && aa==1){
            cout<<"yes\n";
        }
        else if(bb==1 && aa==0){
            cout<<"yes\n";
        }
        else if(bb==0 && aa==1){
            cout<<"yes\n";
        }
        else if(cntA==3 && cntB==0){
            cout<<"yes\n";
        }
        else if(cntB==3 && cntA==0){
            cout<<"yes\n";
        }
        else if(aaa==1 && aa==2 && bb==0 && bbb==0){
            cout<<"yes\n";
        }
        else if(bbb==1 && bb==2 && aa==0 && aaa==0){
            cout<<"yes\n";
        }
        else{
            cout<<"no\n";
        }
    }
}