# Vector Iterators

```c++
#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {10, 20, 30, 40};

    for(auto it = v.begin(); it < v.end(); it++){
        cout << *it << " "; //? 10 20 30 40
    }
    return 0;
}
```
