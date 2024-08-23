#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,q;
    cin>>n>>q;
    int a[n];
     for (int i = 0; i < n; i++)
     {
        cin>>a[i];
     }
// BUT EI METHOD E KORLE "TLE" ASHBE. 
//"PREFIX SUM" METHOD E KORTE HOBE
//SEE SOLUTION --> MODULE-3 - MOD-3     
     while (q--)
     {
        int l,r;
        cin>>l>>r;
        l--;
        r--;
        int sum=0;
        for (int i = l; i <= r; i++)
        {
            sum+=a[i];
        }
        cout<<sum<<endl;
     }
     
    return 0;
}