

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    cin.ignore();

    while (T--)
    {
        string S;
        getline(cin, S);

        string word;
        stringstream ss(S);

        map<string, int> mp;
        int maxCount=0;
        string maxWord;

        while (ss >> word)
        {
            mp[word]++;
            if(mp[word] > maxCount)
            {
                maxCount = mp[word];
                maxWord = word;
            }
        }
        
        cout << maxWord << " " << maxCount << endl;
    }

    return 0;
}