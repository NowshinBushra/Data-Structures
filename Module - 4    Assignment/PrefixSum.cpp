#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<long long> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    vector<long long> pre(n);
    pre[0] = a[0];

    for (int i = 1; i < n; i++)
    {
        pre[i] = a[i] + pre[i - 1];
    }

    for (int i = 0; i < n; i++)
    {
        cout << pre.back() << " ";
        pre.pop_back();
    }

    return 0;
}
/*  int main()
{
    int n;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    long long pre[n];
    pre[0] = a[0];

    for (int i = 1; i < n; i++)
    {
        pre[i] = a[i] + pre[i - 1];
    }
    int i = 0, j = n - 1;

    while (i < j)
    {
        swap(pre[i], pre[j]);
        i++;
        j--;
    }
    for (int i = 0; i < n; i++)
    {
        cout << pre[i] << " ";
    }

    return 0;
}    */
