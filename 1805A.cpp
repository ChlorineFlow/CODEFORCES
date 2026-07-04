#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tt;
    cin>>tt;
    while (tt--)
    {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++){ 
            cin >> arr[i];
        }
        int xr = 0;
        for (int x : arr){
                xr = xr ^ x;
            }
        if (n % 2 == 0){
            
            if (xr == 0){
                cout<<2<<endl;
                continue;
            }
            else{
                cout<<-1<<endl;
                continue;
            }
        }
        else{
            cout<<xr<<endl;
            continue;
        }
    }
}