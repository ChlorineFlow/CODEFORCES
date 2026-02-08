#include <bits/stdc++.h>
using namespace std;
int main(){
    int tt;
    cin>>tt;
    while(tt--){ 
    int n;
    cin>>n;
    vector<int>a(n);
    vector<int>b(n);
    for(int i=0; i<n; i++)cin>>a[i];
    for(int i=0; i<n; i++)cin>>b[i];
    b.push_back(0); 
    //comparision
    int sum=0;
    int sum2=0;
    for(int j=0; j<n; j++){
        if(a[j]>b[j+1]){
            sum=sum+a[j];
            sum2=sum2+b[j+1];

        }

    }
    cout<<sum-sum2<<endl;
    }
    
}