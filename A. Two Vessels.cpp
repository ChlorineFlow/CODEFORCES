#include<bits/stdc++.h>
using namespace std;
int main(){
    int tt;
    cin>>tt;
    while(tt--){
        int a,b,c;
        cin>>a>>b>>c;
        if(a==b){
            cout<<0<<endl;
        }
        else if(c>a&& c>b){
            cout<<"1"<<endl;
        }
        else{
            double ni=(a+b)/2.0;
            double gi=abs(ni-a);
            double ji=ceil(gi/c);
            cout<<ji<<endl;

        }
    }
}