#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    ll j=1;
    ll tt;
    cin>>tt;
    while(j<=tt){
        ll size;
        cin>>size;
        vector<ll> arr(size), arr2(size);

        // Input arrays
        for (ll i = 0; i < size; i++) {
            cin >> arr[i];
        }
        for (ll i = 0; i < size; i++) {
            cin >> arr2[i];
        }
        ll diff=INT_MIN;
        ll idx=-1;
        ////    PERFORMING THE OPERATION IN THE ARR ARRAY, FINDING THE DIFFERENCE AND THEN ADDING THE DIFFERENCE TO THAT ELEMENT AND THEN SUBTRACTING IT WITH REST OF THE ELEMENT 
        for(ll i=0; i<size; i++){
            if(arr2[i]>arr[i]){
                diff=arr2[i]-arr[i];
                arr[i]=arr[i]+diff;           //adding the diff 
                idx=i;

                for(int t=0; t<size; t++){
                    if(t==idx)continue;
                    else{
                        arr[t]=arr[t]-diff;   // here subtracting the diff 
                    }
                }
            }
        }
        //now comparison after operation
        bool flag=false;
        for(int g=0; g<size; g++){
            if(arr[g]<arr2[g]){
                break;
            }
            else {
                flag=true;
            }

        }
        if(flag){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
        j++;
    }
}