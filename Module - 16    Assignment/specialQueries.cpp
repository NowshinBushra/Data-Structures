#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
  int Q;
  cin >> Q;

  queue<string> line;

  while (Q--) 
  {
    int cmd;
    cin >> cmd;

    if (cmd == 0) 
    {
      string name;
      cin >> name;
      line.push(name);
    } 
    else if (cmd == 1) 
    {
      string result = line.front();
      
      if (!line.empty()) 
      {
         cout << result << endl;
         line.pop();
      } 
      else if (line.empty()) 
      {
         cout << "Invalid" << endl;
      }
    }
  }

  return 0;
}