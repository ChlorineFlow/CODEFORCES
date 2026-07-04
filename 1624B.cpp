#include<bits/stdc++.h>
using namespace std;
int main(){
    long long tt;
    cin>>tt;
    while(tt--){
        long long a,b,c;
        cin>>a>>b>>c;
        long long aa,bb,cc;
        aa=((2*b)-c)/a;
        bb=(a+c)/(2*b);
        cc=((2*b)-a)/c;
        if(aa>0 && ((2*b)-c)%a==0){
            cout<<"yes"<<endl;
        }
        else if(bb>0 && (a+c)%(2*b)==0){
            cout<<"yes"<<endl;
        }
        else if(cc>0 && ((2*b)-a)%c==0){
            cout<<"yes"<<endl;
        }
        else{
            cout<<"no"<<endl;
        }
    }
}