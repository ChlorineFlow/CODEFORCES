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
        int count=0;
        sort(a.begin(), a.end());
        for (int i=0; i<n-1; i++){
            if(n==1){
                cout<<"YES\n";
                break;
            }
            else if(abs(a[i]-a[i+1])>1){
                cout<<"NO\n";
                break;
            }
            else if(abs(a[i]-a[i+1])<=1){
                count++;
                continue;
            }

        }
        if(count==(n-1)){
            cout<<"YES\n";
        }
    }

    return 0;
}