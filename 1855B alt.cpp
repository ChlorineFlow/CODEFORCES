#include <bits/stdc++.h>
using namespace std;
#define ull unsigned long long
int main() {
    int t;
    cin >> t;

    while (t--) {
        ull n;
        cin >> n;
                        
        ull ans;

        for (ull i = 1;; i++) {
            if (n % i != 0) {
                ans = i - 1;
                break;
            }
        }

        cout << ans << '\n';
    }

    return 0;
}