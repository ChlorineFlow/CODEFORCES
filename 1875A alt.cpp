#include <bits/stdc++.h>
using namespace std;

int main() {
    int tt;
    cin >> tt;

    while (tt--) {
        long long a, b, n;
        cin >> a >> b >> n;

        vector<long long> arr(n);

        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        long long count = b;

        for(int i = 0; i < n; i++) {
            if(arr[i] < a) {
                count += arr[i];
            } else {
                count += a - 1;
            }
        }

        cout << count << endl;
    }

    return 0;
}