# Range Sum Query Bruteforce solution

**Bruteforce** -- not optimized solution\
```c++
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, q;
    cin >> n >> q;

    vector<int> v(n+1);

    for(int i = 1; i <= n; i++){ //? O(N)
        cin >> v[i];
    }

    while(q--){ //? O(Q)*O(N) = O(QN)
        int l, r;
        cin >> l >> r;

        int sum = 0;

        for(int i = l; i <= r; i++){ //? O(N)
            sum += v[i];
        }

        cout << sum << endl;
    }

    return 0;
}

//! Time Complexity of this code is = O(QN) = 10^5*10^5 = 10^10. but program can run only 10^7 operations in 1s.
```