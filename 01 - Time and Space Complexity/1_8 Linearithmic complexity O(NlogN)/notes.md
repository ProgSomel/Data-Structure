# Linearithmic complexity O(NlogN)

```c++
#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n, m;
    cin >> n;

    for(int i = 0; i < n; i++){ //? O(N)
        for(int j = 1; j < n; j*=2){ //? O(logN)
                cout << "Hello World" << endl;
        }
    }
    return 0;
}
```
**Time complexity of the above code is **O(N*logN)** as nested loop and incrementing by multiplication**