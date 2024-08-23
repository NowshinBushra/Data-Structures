#include <bits/stdc++.h>
using namespace std;

void printL(list<int> myList)
{
    cout<<"L -> ";
    for (int val : myList)
    {
        cout << val << " ";
    }
    cout << endl;
}
void printR(list<int> myList) 
{
    myList.reverse();
    cout<<"R -> ";
    for (int val : myList)
    {
        cout << val << " ";
    }
    cout << endl;
}
int main()
{

    list<int> myList;

    int Q;
    cin >> Q;
    int X, V;
    
        int sz= myList.size();
    for (int i = 0; i < Q; ++i)
    {
        cin >> X >> V;
        if (X == 0)
        {
            myList.push_front(V);
        }
        else if (X == 1)
        {
            myList.push_back(V);
        }
        
        else if (X == 2)
        {
            int size= myList.size();
            if (V < size)
            {
                myList.erase(next(myList.begin(), V));
            }
            // else if (V>=size)
            // {
            //     continue;
            // }
        }
        
    printL(myList);
    printR(myList);
    }
    return 0;
}