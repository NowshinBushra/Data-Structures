#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int>a(n);
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    int m;
    cin>>m;
    vector<int>b(m);
    for (int i = 0; i < m; i++)
    {
        cin>>b[i];
    }
    int x;
    cin>>x;

    a.insert(a.begin()+x, b.begin(), b.end());
    for ( int val: a)
    {
        cout<<val<<" ";
    }
    //----OR----
    // for (int i = 0; i < a.size(); i++)
    // {
    //     cout<<a[i]<<" ";
    // }

    return 0;

}










// int main()
// {
//     int test;
//     cin >> test;
//     while (test--)
//     {
//         int n;
//         cin >> n;
        
//         int a[n];
//         for (int i = 0; i < n; i++)
//         {
//             cin>>a[i];
//         }
//         bool flag=true;
//         for (int i = 0; i < n; i++)
//         {
//             if (a[i]>a[i+1])
//             {
//                 flag=false;
//                 break;
//             }
            
//         }
//         if(flag==true)
//             cout<<"YES"<<endl;
//         else
//             cout<<"NO"<<endl;
//     }

//     return 0;
// }