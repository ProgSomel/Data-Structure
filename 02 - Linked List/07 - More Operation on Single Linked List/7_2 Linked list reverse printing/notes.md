# Linked list reverse printing --- using Recursion function

```c++
#include<bits/stdc++.h>
using namespace std;

void rec(int i, int n){
    //? base case
    if(i > n){
        return;
    }
    cout << i << endl;
    rec(i+1, n);
}

int main()
{
    int n = 5;
    rec(1, n);

    return 0;
}
```
```bash
1
2
3
4
5
```

-------------------------------------------------------------------------------------------------------------------------------------

```c++
#include<bits/stdc++.h>
using namespace std;

void rec(int i, int n){
    //? base case
    if(i > n){
        return;
    }
    rec(i+1, n);
    cout << i << endl;
}

int main()
{
    int n = 5;
    rec(1, n);

    return 0;
}
```
```bash
5
4
3
2
1
```