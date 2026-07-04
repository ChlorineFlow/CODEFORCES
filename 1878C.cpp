#include<bits/stdc++.h>
using namespace std;
int main(){
    long long tt;
    cin>>tt;
    while(tt--){
        long long n,k,x;
        cin>>n;
        cin>>k;
        cin>>x;
        
        long long first = k*(k+1)/2;
        long long last = k*(2*n-k+1)/2;

        if(x>=first&&x<=last){
            cout<<"yes\n";
        }
        else{
            cout<<"no\n";
        }
    }
}
