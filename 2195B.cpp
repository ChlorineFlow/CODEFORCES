// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll tt;
    cin >> tt;
    while (tt--)
    {
        ll n;
        cin >> n;
        vector<ll> arr(n + 1);
        arr[0] = 0;
        for (int i = 1; i < n + 1; i++)
        {
            cin >> arr[i];
        }
        bool changed = true;

        while (changed)
        {
            changed = false;

            for (int i = 1; i <= (n + 1) / 2; i++)
            {
                if (2 * i > n)
                    continue;
                if (arr[i] > arr[2 * i])
                {
                    swap(arr[i], arr[2 * i]);
                    changed = true;
                }
            }
        }
        if (is_sorted(arr.begin(), arr.end()))
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}