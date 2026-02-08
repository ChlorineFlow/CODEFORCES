#include <iostream>
using namespace std;
int main() {
    int tt,i;
    i=1;
    cin>>tt;
    while(i<=tt){
        int n,a,b;
        cin>>n>>a>>b;
        if(a%2==0&&b%2==0){
            cout<<"YES"<<endl;
        }
        else if(a%2!=0&&b%2!=0){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
        
        i++;
        
    }

    return 0;
}