#include<bits/stdc++.h>
using namespace std;

class myStack
{
public:
    list<int> sl;
    void push(int x)
    {
        sl.push_back(x);
    }
    void pop()
    {
        sl.pop_back();
    }
    int top()
    {
        return sl.back();
    }
    int size()
    {
        return sl.size();
    }
    bool empty()
    {
        return sl.empty();
    }
};
class myQueue
{
public:
    list<int> ql;
    void push(int y)
    {
        ql.push_back(y);
    }
    void pop()
    {
        ql.pop_front();
    }
    int front()
    {
        return ql.front();
    }
    int size()
    {
        return ql.size();
    }
    bool empty()
    {
        return ql.empty();
    }
};

int main()
{
    myStack sl;
    myQueue ql;
    int N,M;
    cin >> N>>M;
    for (int i = 0; i < N; i++)
    {
        int x;
        cin >> x;
        sl.push(x);
    }
    for (int i = 0; i < M; i++)
    {
        int y;
        cin >>y;
        ql.push(y);
    }
    
    bool is_Same = true;

    while (!sl.empty() && !ql.empty())
    {
        int X = sl.top();
        sl.pop();

        int Y = ql.front();
        ql.pop();

        if (X != Y)
        {
            is_Same = false;
            break;
        }
    }

    if (sl.empty() && ql.empty() && is_Same)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}