#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> myList = {2, 3, 4, 5, 6, 7, 8, 9};
    for (int val : myList)
    {
        cout << val << " ";
    }
    cout << endl;

//---push & pop-----------------------
    myList.pop_back();
    myList.pop_front();
    myList.push_front(1);
    myList.push_back(10);

    for (int val : myList)
    {
        cout << val << " ";
    }
    cout << endl;


//insert--------------------------------
    myList.insert(next(myList.begin(), 1), 2);
    for (int val : myList)
    {
        cout << val << " ";
    }
    cout << endl;


//erase--------------------------------
    myList.erase(next(myList.begin(), 8));
    for (int val : myList)
    {
        cout << val << " ";
    }
    cout << endl;


//insert--------------------------------
    myList.insert(next(myList.begin(), 8), {9, 10});
    for (int val : myList)
    {
        cout << val << " ";
    }
    cout << endl;

    list<int> newList = {11, 12, 13};
    myList.insert(next(myList.begin(), 8), newList.begin(), newList.end());
    for (int val : myList)
    {
        cout << val << " ";
    }
    cout << endl;


//erase--------------------------------
    myList.erase(next(myList.begin(), 8), next(myList.begin(), 11));
    for (int val : myList)
    {
        cout << val << " ";
    }
    cout << endl;


//replace--------------------------------
    replace(myList.begin(), myList.end(), 10, 100);
    for (int val : myList)
    {
        cout << val << " ";
    }
    cout << endl;


//find--------------------------------
    auto it = find(myList.begin(), myList.end(), 5);
    cout << *it << endl;
    // auto it = find(myList.begin(), myList.end(),500);
    // cout<< *it<<endl;
    if (it == myList.end())
        cout << "not found" << endl;
    else
        cout << "found" << endl;

    return 0;
}