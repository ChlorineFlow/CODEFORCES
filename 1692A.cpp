#include <bits/stdc++.h>
using namespace std;
int main(){
    int tt;
    cin>>tt;
    while(tt--){ 
    vector<int>a(4);
    for(int i=0; i<4; i++){
        cin>>a[i];
    }
    int target=a[0];
    sort(a.begin(), a.end());
    int count=-1;
    for(int i=0; i<4; i++){
        if(target==a[i]){
            count=i;
        }
        
    }
    cout<<3-count<<endl;
   }
}