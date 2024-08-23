#include <bits/stdc++.h>
using namespace std;

class myStack{
public:
    
    string eliminate(string s) 
    {
        stack<char> st;
        for (char c : s) {
            if (!st.empty() && c=='1' && st.top()=='0') 
            {
                st.pop(); 
            } 
            else 
            {
                st.push(c);
            }
        }
        return (st.empty() ? "YES" : "NO");
    }
    
};

int main() 
{
    myStack process;
    int T;
    cin >> T;
    cin.ignore();
    while (T--) {
        string S;
        getline(cin, S);
        string result = process.eliminate(S);
        cout << result << endl;
    } 
    return 0;
}