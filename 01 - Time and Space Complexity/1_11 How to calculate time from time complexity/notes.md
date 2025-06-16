# How to calculate time from time complexity

time limit per test: 1 seconds

**1s ==> +-10^7-10^8 operations but best one is 10^7**

1s --- 10^7
2s --- 2*10^7

```c++
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, q;
    cin >> n >> q;

    int a[n];

    for(int i = 0; i < n; i++){ //? O(N)
        cin >> a[i];
    }

    for(int i = 0; i < q; i++){ //? O(Q)
        int x;
        cin >> x;
        int flag = 0;

        for(int i = 0; i < n; i++){ //? O(N)
            if(a[i] == x){
                flag = 1;
            }
        }
        if(flag == 1){
            cout << "found" << endl;
        }else{
            cout << "not found" << endl; 
        }
    }

    return 0;
}
```

Time complexity calculattion:
O(N)+O(q*N)
**Here worst one is O(q*N) so we take O(q**N) as time complexity**
in question q and n boths are 10^5 
O(q**N) = 10^5*10^5 = 10^10 which is greater then 10^7 thats why this code will show time limit exceeded error