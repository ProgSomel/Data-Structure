# Best to Worst Complexity

Constant: O(1)
Linear: O(N)
Logarithmic: O(logN)
Square root: O(sqrt(N))
quadratic: O(N*N)
Linearithmic: O(NlogN)

**Find out the best and Worst:**

at first let N = 1000;

- Constant: O(1) --> 1
```c++
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; //? O(1)
    cin >> n; //? O(1)

    int sum = 0; //? O(1)

    sum = (n*(n+1))/2; //? O(1)
    cout << sum << endl; //? O(1)
    return 0;
}
```

- Linear: O(N): 1000 
- Logarithmic: O(logN) : log1000 = 10
- Square root: O(sqrt(N)): sqrt(1000) = 32
- quadratic: O(N*N): 1000**1000 = 1000000
- Linearithmic: O(NlogN): 1000log1000 = 10000
  
**Here best one is Constant: O(1) --> 1**
Constant: O(1): 1 > Logarithmic: O(logN) : log1000 = 10 > Square root: O(sqrt(N)): sqrt(1000) = 32 > 
Linear: O(N): 1000 > Linearithmic: O(NlogN): 1000log1000 = 10000 > quadratic: O(N*N): 1000**1000 = 1000000