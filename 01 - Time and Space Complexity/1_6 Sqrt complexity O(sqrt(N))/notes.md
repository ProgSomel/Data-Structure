# Sqrt complexity O(sqrt(N))

```c++
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    for(int i = 1; i <= sqrt(n); i++){
        cout << i << endl;
    }
    return 0;
}
```
If n = 100 then loop will continue to 10. If n = 36 then loop will continue to 6
