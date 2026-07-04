#include<bits/stdc++.h>
using namespace std;
int main(){
    long long tt;
    cin>>tt;
    while(tt--){
        long long n;
        cin>>n;
        vector<long long>arr;
        for(long long i=1; i<=n; i++){
            if(n%i==0){
                arr.push_back(i);
            }
        }
        vector<long long>arr2;
        long long count=0;
        for(long long i=0; i<arr.size()-1; i++){
            if(arr[i]==arr[i+1]-1){
                count++;
            }
            else{
                arr2.push_back(count);
                count=0;
            }
        }
        arr2.push_back(count);
        cout << *max_element(arr2.begin(), arr2.end())+1 << endl;
    }
}