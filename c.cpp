// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
int main() {
    
    int tt,n,a;
    cin>>tt;
    while(tt--){
        cin>>n;
        vector<int>en,on;
        for (int i=0; i<n; i++){
            cin>>a;
            if(a%2==0){
                en.push_back(a);
            }
            else{
                on.push_back(a);
            }
        }
        vector<int>arr;
        arr.insert(arr.end(), en.begin(), en.end()); 
        arr.insert(arr.end(), on.begin(), on.end()); 
        int s=0;
        int sc=0;
        for(int j=0; j<n; j++){   
            s=s+arr[j];   
            if(arr[j]%2==0){ 
                sc++;
            }
            while(s%2==0){
                s=s/2;
            }
        }
        cout<<sc<<endl;
    }

    return 0;
}
