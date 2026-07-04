#include <bits/stdc++.h>
using namespace std;
int main(){
    int tt;
    cin >> tt;
    while (tt--)
    {
        int n;
        cin >> n;
        string arr;
        cin>>arr;
        int ans = n;
        int left = 0;
        int right = n - 1;
        while (left <= right){
            if (arr[left] != arr[right]){
                ans -= 2;
            }
            else{
                break;
            }
            left++;
            right--;
        }
        cout<<ans<<endl;
    }
}
