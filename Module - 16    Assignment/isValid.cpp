#include <bits/stdc++.h>
using namespace std;

class myStack
{
public:
    string isValid(string s)
    {
        stack<char> st;
        for (char c : s)
        {
            if (c == '0')
            {
                if (!st.empty() && st.top() == '1')
                {
                    st.pop();
                }
                else
                {
                    st.push(c);
                }
            }
            else if (c == '1')
            {
                if (!st.empty() && st.top() == '0')
                {
                    st.pop();
                }
                else
                {
                    st.push(c);
                }
            }
        }
        if (st.empty())
        {
            return "YES";
        }
        else
        {
            return "NO";
        }
    }
};

int main()
{
    myStack check;
    int T;
    cin >> T;
    cin.ignore();

    while (T--)
    {
        string s;
        getline(cin, s);

        string result = check.isValid(s);
        cout << result << endl;
    }

    return 0;
}