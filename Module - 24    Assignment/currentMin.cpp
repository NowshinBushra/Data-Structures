
#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int N;
    cin >> N;

    vector<int> A(N);
    for (int i = 0; i < N; i++) 
        cin >> A[i];

    priority_queue<int, vector<int>, greater<int>> pq(A.begin(), A.end());
    
    int Q;
    cin >> Q;
    while (Q--) 
    {
        int cmd;
        cin >> cmd;

        if (cmd == 0) 
        {
            int X;
            cin >> X;
            pq.push(X);
            cout << pq.top() << endl;
        } 
        else if (cmd == 1) 
        {
            if (pq.empty()) 
                cout << "Empty" << endl;
            else 
                cout << pq.top() << endl;
        } 
        else if (cmd == 2) 
        {
            if (pq.empty()) 
                cout << "Empty" << endl; 
            else 
            {
                pq.pop();

                if (pq.empty()) 
                    cout << "Empty" << endl;
                else 
                    cout << pq.top() << endl;
            }
        }
    }
    return 0;
}