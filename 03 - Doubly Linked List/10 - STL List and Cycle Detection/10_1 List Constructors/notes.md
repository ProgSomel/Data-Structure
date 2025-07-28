# List Constructors
```c++
#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int> l;
    return 0;
}
```

------------------------------------------------------------------------------------------------------------------------------------

```c++
#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int> l;
    cout << l.size() << endl;
    return 0;
}
```
```bash
0
```

--------------------------------------------------------------------------------------------------------------------------------------

```c++
#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int> l(10);
    cout << l.size() << endl;
    return 0;
}
```
```bash
10
```

-------------------------------------------------------------------------------------------------------------------------------------

```c++
#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int> l(10, 3);
    cout << *l.begin() << endl;
    return 0;
}
```
```bash
3
```

------------------------------------------------------------------------------------------------------------------------------------

```c++
#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int> l(10, 3);
    for(auto it = l.begin(); it!=l.end(); it++){
        cout << *it << " ";
    }
    return 0;
}
```
```bash
3 3 3 3 3 3 3 3 3 3
```

-------------------------------------------------------------------------------------------------------------------------------------

```c++
#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int> l(10, 3);
    for(int val: l){
        cout << val << " ";
    }
    return 0;
}
```
```bash
3 3 3 3 3 3 3 3 3 3 
```

**-------------------------------------------------------------------------------------------------------------------------------------**

## list<type>myList(list2) --- construct a list by copying another list list2 --- O(N)
```c++
#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int> l = {1, 2, 3, 4, 5};
    list<int> l2(l);
    for(int val: l2){
        cout << val << " ";
    }
    return 0;
}
```
```bash
1 2 3 4 5
```

**-------------------------------------------------------------------------------------------------------------------------------------**

## list<int>myList(A, A+N) --- construct a list by copying all elements from an array A of size N --- O(N)
```c++
#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int> l = {1, 2, 3, 4, 5};
    int arr[] = {10, 20, 30, 40, 50};
    list<int> l2(arr, arr+5);
    for(int val: l2){
        cout << val << " ";
    }
    return 0;
}
```
```bash
10 20 30 40 50
```

**-------------------------------------------------------------------------------------------------------------------------------------**

## list<type>myList(v.begin(), v.end()) --- construct a list by copying all elements from a vector v --- O(N)
```c++
#include<bits/stdc++.h>
using namespace std;
int main()
{
    // list<int> l = {1, 2, 3, 4, 5};
    // int arr[] = {10, 20, 30, 40, 50};
    vector<int> v = {100, 200, 300, 400, 500};
    list<int> l2(v.begin(), v.end());
    for(int val: l2){
        cout << val << " ";
    }
    return 0;
}
```
```bash
100 200 300 400 500
```