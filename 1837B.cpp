#include<bits/stdc++.h>
using namespace std;

int main() {
    int tt;
    cin >> tt;

    while(tt--) {
        int n;
        string s;

        cin >> n;
        cin >> s;

        int count = 1;      
        int longest = 1;    

        for(int i = 1; i < n; i++) {
            if(s[i] == s[i - 1]) {
                count++;
            } else {
                count = 1;
            }

            longest = max(longest, count);
        }

        cout << longest + 1 << endl;
    }

    return 0;
}