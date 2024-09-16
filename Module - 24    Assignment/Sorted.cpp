
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin >> test;

    while (test--)
    {
        int N;
        cin >> N;
        
        set<int> s;

        for (int i = 0; i < N; i++)
        {
            int val;
            cin >> val;
            s.insert(val);
        }
        for (auto it : s)
        {
            cout << it << " ";
        }
        cout << endl;
    }

    return 0;
}
// 6
// 8
// 3 10 0 6 9 5 10 10
// 2
// 7 3
// 6
// 7 8 2 0 6 3
// 4
// 6 2 0 1
// 10
// 10 0 7 8 5 3 0 3 0 4
// 9
// 9 3 7 10 6 9 0 6 3

// 0 3 5 6 9 10
// 3 7
// 0 2 3 6 7 8
// 0 1 2 6
// 0 3 4 5 7 8 10
// 0 3 6 7 9 10