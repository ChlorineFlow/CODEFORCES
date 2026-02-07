#include <iostream>
using namespace std;
int main()
{
    int i, n, tt;
    cin >> tt;
    i = 1;
    while (i <= tt)
    {
        cin >> n;
        int rem = n % 7;

        if (rem == 0)
        {
            cout << n << endl;
        }
        else
        {
            int ld = n % 10;
            if (ld < rem)
            {
                n = n + (7 - rem);
            }
            else if (ld > rem)
            {
                n = n - rem;
            }
            else
            {
                n = n + (7 - rem);
            }
            
            cout << n << endl;
        }
        
        i++;
    }
    return 0;
}