#include <bits/stdc++.h>
using namespace std;
int main() {
    int tt;
    cin>>tt;
    while(tt--){
        int n;
        cin>>n;
        vector<int>a(n);
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        sort(a.begin(),a.end());
        bool allSame = true;
        for (int i = 1; i < n; i++) {
            if (a[i] != a[0]) {
                allSame = false;
                break; // Exit early if any element differs
            }
        }
        
        if (allSame) {
            cout << "0\n";
        }
        else{
        vector<int>b;
        for (int i=0; i<n; i++){
            if (i==0){
                b.push_back(a[i]);
            }
            else {
                if(a[i]!=b.back()){
                    b.push_back(a[i]);
                }
            }
        }
        if(n%2==0){ 
            cout<<b.size()<<endl;

        }
        else{
            cout<<b.size()-1<<endl;
        }
    }
    }
    

    return 0;
}