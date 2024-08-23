#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> myList = {5,5,7,4,3,0,2,9,8,1,0,6};
    for (int val : myList)
    {
        cout << val << " ";
    }
    cout << endl;

//----------------------------remove
    myList.remove(0);
    for (int val : myList)
    {
        cout << val << " ";
    }
    cout << endl;

//----------------------------ascending sort
    myList.sort();
    for (int val : myList)
    {
        cout << val << " ";
    }
    cout << endl;

//----------------------------descending sort
    myList.sort(greater<int>());
    for (int val : myList)
    {
        cout << val << " ";
    }
    cout << endl;

//----------------------------unique
    myList.unique();
    for (int val : myList)
    {
        cout << val << " ";
    }
    cout << endl;

//----------------------------reverse
    myList.reverse();
    for (int val : myList)
    {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}