// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tt;
    cin >> tt;
    while (tt--)
    {
        int n, k, x;
        cin >> n >> k >> x;
        bool flag = true;
        if (k == 1)
        {
            cout << "NO\n";
            flag = false;
        }
        // inserting element
        vector<int> arr;
        int f = 1;
        for (int i = 0; i < k - 1; i++)
        {
            if (f == x)
            {
                f = f + 1;
            }
            arr.push_back(f);
            f++;
        }

        // real operation
        for (int i = 0; i < arr.size(); i++)
        {
            int rem = n % arr[i];
            int times = n / arr[i];
            bool exists = (find(arr.begin(), arr.end(), rem) != arr.end());
            int ele = arr[i];
            if (rem == 0)
            {
                cout << "YES\n";
                cout << times << endl;
                for (int j = 0; j < times; j++)
                {
                    cout << ele << " ";
                }
                flag = false;
                cout << endl;
                break;
            }
            else if (exists)
            {
                cout << "YES\n";
                cout << times + 1 << endl;
                for (int k = 0; k < times; k++)
                {
                    cout << ele << " ";
                }
                cout << rem << " " << endl;
                flag = false;
                break;
            }
        }
        if (n % 2 != 0 && x == 1)
        {
            cout << "yes\n";
            cout << ((n - 3) / 2) + 1 << endl;
            for (int l = 0; l < (n - 3) / 2; l++)
            {
                cout << "2" << " ";
            }
            cout << 3 << " " << endl;
            flag = false;
            break;
        }
        if (flag)
        {
            cout << "NO\n";
        }
    }

    return 0;
}