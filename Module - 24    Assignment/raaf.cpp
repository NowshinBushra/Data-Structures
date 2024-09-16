
#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int N;
    cin >> N;

    vector<int> A(N);
    for (int i = 0; i < N; i++) 
        cin >> A[i];

    set<int> S(A.begin(), A.end());
    
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
            S.insert(X);
            cout << *S.begin() << endl;
        } 
        else if (cmd == 1) 
        {
            if (S.empty()) 
                cout << "Empty" << endl;
            else 
                cout << *S.begin() << endl;
        } 
        else if (cmd == 2) 
        {
            if (S.empty()) 
                cout << "Empty" << endl; 
            else 
            {
                int minVal = *S.begin();
                S.erase(minVal);

                if (S.empty()) 
                    cout << "Empty" << endl;
                else 
                    cout << *S.begin() << endl;
            }
        }
    }
    return 0;
}