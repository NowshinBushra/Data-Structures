#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;
    vector<int> A(N);

    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }

    for (int i = 0; i < N; i++)
    {
        if (A[i]<0)
        {
            replace(A.begin(), A.end(), A[i], 2);
        }
        else if (A[i]>0)
        {
            replace(A.begin(), A.end(), A[i], 1);
        }
        
        cout << A[i] << " ";
    }
    return 0;
}