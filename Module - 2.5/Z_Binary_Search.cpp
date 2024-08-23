#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, q;
    cin >> n >> q;

    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
// BUT EI METHOD E KORLE "TLE" ASHBE. 
//BINARY SEARCH ER "MID VALUE" METHOD E KORTE HOBE
//SEE SOLUTION --> MODULE-3 - MOD-7
    while (q--)
    {
        int x;
        cin >> x;
        bool flag = false;
        for (int i = 0; i < n; i++)
        {
            if (x == a[i])
            {
                flag = true;
                break;
            }
        }
        if (flag == true)
        {
            cout << "found" << endl;
        }
        else
        {
            cout << "not found" << endl;
        }
    }
    return 0;
}