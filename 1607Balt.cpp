#include<bits/stdc++.h>
using namespace std;
int main(){
    int tt;
    cin>>tt;
    while(tt--){
        long long n,x;
        cin>>x>>n;
        bool flag=false;
        if(x%2==0){
            flag=true;
        }
        int rem=n%4;
        if(flag){
            if(rem==0){
                cout<<x<<endl;
            }
            else if(rem==1){
                cout<<x-n<<endl;
            }
            else if(rem==2){
                cout<<x+1<<endl;
            }
            else{
                cout<<x+n+1<<endl;
            }
        }
        else{
            if(rem==0){
                cout<<x<<endl;
            }
            else if(rem==1){
                cout<<x+n<<endl;
            }
            else if(rem==2){
                cout<<x-1<<endl;
            }
            else{
                cout<<x-n-1<<endl;
            }
        }
    }
}