#include <bits/stdc++.h>
using namespace std;

// void func(int *p)
// {
//     *p=20;
//     //    output
//     //        10
//     //        20
//     //        20
// }

// void func(int *p)
// {
//     p = NULL;
//    //       output
//    //         10
//    //         10
//    //         10    
// }

void func(int *&p)
{
   // cout << &p <<endl;     // &p = &ptr
    p=NULL;
}
int main()
{
    int val = 10;
    int *ptr = &val;
    
    cout << val << endl;
    func(ptr);
    cout << val << endl;
   // cout << *ptr << endl; //-----------error
    cout<< ptr << endl;   //----------- 0 for setting NULL
   // cout<< &ptr << endl;      // &ptr = &p
    return 0;
}