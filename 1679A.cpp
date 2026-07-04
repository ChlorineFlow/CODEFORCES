#include<bits/stdc++.h>
using namespace std;
int main(){
    long long tt;
    cin>>tt;
    while(tt--){
        long long n;
        cin>>n;
        long long min,max;
        min=0;
        max=0;
        if(n==2||n%2!=0){
            cout<<-1<<endl;
            continue;
        }
        max=n/4;
        min=n/6;
        long long remin=n%6;
        long long remax=n%4;
        if(remax==0&& remin==0){
            cout<<min<<" "<<max<<endl;
            continue;
        }
        // if(remax==2&&remin==2){
        //     min--;
        // }
        if(remin==2){
            min++;
        }
        if(remin==4){
            min++;
        }  
        cout<<min<<" "<<max<<endl;          
        
    }

}