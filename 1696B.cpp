#include <bits/stdc++.h>
using namespace std;
int main(){
    long long tt;
    cin >> tt;
    while (tt--){
        long long n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++){
            cin >> a[i];
        }
        int blocks = 0;

        for (int i = 0; i < n; i++){
            if (a[i] != 0 && (i == 0 || a[i - 1] == 0)){
                blocks++;
            }
        }
        if(blocks>2){
            cout<<2<<endl;
        }
        else{
            cout<<blocks<<endl;
        }
    }
}