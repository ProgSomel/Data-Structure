# STL Queue

```c++
#include<bits/stdc++.h>
using namespace std;
int main()
{
    queue<int> q;
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        int val;
        cin >> val;
        q.push(val);
    }

    while(!q.empty()){
        cout << q.front() << " ";
        q.pop();
    }
    return 0;
}
```
```bash
//input
5
10 20 30 40 50

//output
10 20 30 40 50
```