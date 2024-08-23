#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, M;
    cin >> N >> M;

    stack<int> st;
    queue<int> que;

    for (int i = 0; i < N; i++)
    {
        int x;
        cin >> x;
        st.push(x);
    }

    for (int i = 0; i < M; i++)
    {
        int y;
        cin >> y;
        que.push(y);
    }

    bool is_Same = true;

    while (!st.empty() && !que.empty())
    {
        int X = st.top();
        st.pop();

        int Y = que.front();
        que.pop();

        if (X != Y)
        {
            is_Same = false;
            break;
        }
    }

    if (st.empty() && que.empty() && is_Same)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}