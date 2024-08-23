#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> myList = {1, 2, 3, 4, 5, 6, 7};
    // cout<<myList.max_size()<<endl;

    cout << myList.size() << endl;
    for (int val : myList)
    {
        cout << val << " ";
    }
    cout << endl;

    // <<myList.empty();

    myList.resize(9);
    cout << endl
         << myList.size() << endl;
    for (int val : myList)
    {
        cout << val << " ";
    }
    cout << endl;

    myList.resize(4);
    cout << endl
         << myList.size() << endl;
    for (int val : myList)
    {
        cout << val << " ";
    }
    cout << endl;

    myList.clear();
    cout << endl
         << myList.size() << endl;

    return 0;
}