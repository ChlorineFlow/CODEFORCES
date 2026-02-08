#include<bits/stdc++.h>
using namespace std;
int main(){
    int tt;
    cin>>tt;
    while(tt--){
        int n;
        cin>>n;
        vector<int>arr(n);
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        int count=0;
        vector<int>crr;
        for(int i=0; i<n; i++){
            if(arr[i]!=1){
                count++;
            }
            if(arr[i]==1){
                crr.push_back(count);
                count=0;
            }
        }
        crr.push_back(count);

        cout << *max_element(crr.begin(), crr.end())<<endl;
    }

}