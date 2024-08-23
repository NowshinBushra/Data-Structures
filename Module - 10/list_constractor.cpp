#include <bits/stdc++.h>
using namespace std;

int main()
{
    // list<int> myList;
    // list<int> myList(5);
    // list<int> myList(5, 10);

    list<int> list2 = {1, 2, 3, 4, 5};

    list<int> myList(list2); //-------copying list

    // int a[6]= {1,2,3,4,5,6};          --------Array
    //  list<int> myList(a,a+6);

    // vector<int> v= { 6,7,8,9 };       ------Vector
    // list<int> myList(v.begin(), v.end());

    // for( auto it= myList.begin(); it!=myList.end(); it++)
    // {
    //     cout<< *it <<endl;
    // }

    for (int val : myList) //---Ranged based for loop
    {
        cout << val << endl;
    }

    return 0;
}
