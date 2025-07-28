# Why we need to learn time complexity
- Using **loop** ---> unoptimized way:
```c++
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    int sum = 0;

    for(int i = 1; i <= 100; i++){
        sum += i;
    }

    cout << sum << endl;
    return 0;
}
```
```bash
//input
100
//output
5050
```

---------------------------------------------------------------------------------------------------------------------------------

- Optimized way:

```c++
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    int sum = 0;

    // for(int i = 1; i <= 100; i++){
    //     sum += i;
    // }

    sum = (n*(n+1))/2;

    cout << sum << endl;
    return 0;
}
```
```bash
//input
100
//output
5050
```

**------------------------------------------------------------------------------------------------------------------------------------**

```c++
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, q;
    cin >> n >> q;

    int a[n];

    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    for(int i = 0; i < q; i++){
        int x;
        cin >> x;
        int flag = 0;

        for(int i = 0; i < n; i++){
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