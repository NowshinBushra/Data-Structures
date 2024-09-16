
#include<bits/stdc++.h>
using namespace std;

bool cmp(pair<string, int> a, pair<string, int> b) {
    if (a.first == b.first) {
        return a.second > b.second;  
    }
    else return a.first < b.first;  
}
int main()
{
    int N;
    cin>>N;

    int val;
    string name;

    vector<pair<string, int>> person;

    for(int i=0; i<N; i++)
    {
        cin>>name >>val;

        person.push_back({name,val});
        
    }
    sort(person.begin(), person.end(), cmp);

    for(auto it : person)

    {
        cout << it.first << " " << it.second << endl;
    }

    return 0;
}