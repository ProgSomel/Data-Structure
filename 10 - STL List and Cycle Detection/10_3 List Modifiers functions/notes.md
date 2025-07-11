# List Modifiers functions

## myList = or myList.assign(list2.begin(), list2.end()) -- assign another list -- O(N)

```c++
#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int> l = {10, 20, 30};
    list<int> l2;
    l2 = l;
    for(int val:l2){
        cout << val << " ";
    }
    return 0;
}
```

```bash
10 20 30
```

---

```c++
#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int> l = {10, 20, 30};
    list<int> l2;
    l2.assign(l.begin(), l.end());
    for(int val:l2){
        cout << val << " ";
    }
    return 0;
}
```

```bash
10 20 30
```

**-------------------------------------------------------------------------------------------------------------------------------------**

## myList.push_back() -- add an element to the tail -- O(1)

```c++
#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int> l = {10, 20, 30};
    l.push_back(100);

    for(int val:l){
        cout << val << " ";
    }
    return 0;
}
```

```bash
10 20 30 100
```

**-------------------------------------------------------------------------------------------------------------------------------------**

## myList.push_front() -- add an element to the head -- O(1)

```c++
#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int> l = {10, 20, 30};
    l.push_back(100);
    l.push_front(100);

    for(int val:l){
        cout << val << " ";
    }
    return 0;
}
```

```bash
100 10 20 30 100
```

**-------------------------------------------------------------------------------------------------------------------------------------**

## myList.pop_back() -- Delete at Tail -- O(1)

```c++
#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int> l = {10, 20, 30};

    for(int val:l){
        cout << val << " ";
    }
    cout << endl;

    l.pop_back();

     for(int val:l){
        cout << val << " ";
    }
    return 0;
}
```

```bash
10 20 30
10 20
```

**-------------------------------------------------------------------------------------------------------------------------------------**

## myList.pop_front() -- Delete at Head -- O(1)

```c++
#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int> l = {10, 20, 30};

    for(int val:l){
        cout << val << " ";
    }
    cout << endl;

    l.pop_front();

     for(int val:l){
        cout << val << " ";
    }
    return 0;
}
```
```bash
10 20 30 
20 30
```

**-------------------------------------------------------------------------------------------------------------------------------------**

## myList.insert() -- insert elements at a specific position -- O(N+K); where K is the number of elements to be inserted
```c++
#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int> l = {10, 20, 30};

    cout << *next(l.begin(), 2) << endl;

    for(int val:l){
        cout << val << " ";
    }
    return 0;
}
```
```bash
30
10 20 30
```

-------------------------------------------------------------------------------------------------------------------------------------

```c++
#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int> l = {10, 20, 30};

    cout << *next(l.begin(), 0) << endl;

    for(int val:l){
        cout << val << " ";
    }
    return 0;
}
```
```bash
10
10 20 30
```

-------------------------------------------------------------------------------------------------------------------------------------

```c++
#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int> l = {10, 20, 30};

    for(int val:l){
        cout << val << " ";
    }
    cout << endl;

    l.insert(next(l.begin(), 2), 100);

    for(int val:l){
        cout << val << " ";
    }
    return 0;
}
```
```bash
10 20 30 
10 20 100 30
```

-----------------------------------------------------------------------------------------------------------------------------------

```c++
#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int> l = {10, 20, 30};
    list<int> l2 = {100, 200};

    for(int val:l){
        cout << val << " ";
    }
    cout << endl;

    l.insert(next(l.begin(), 2), l2.begin(), l2.end());

    for(int val:l){
        cout << val << " ";
    }
    return 0;
}
```
```bash
10 20 30 
10 20 100 200 30
```

---------------------------------------------------------------------------------------------------------------------------------------

```c++
#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int> l = {10, 20, 30};
    list<int> l2 = {100, 200};
    vector<int> v = {2, 3, 4};

    for(int val:l){
        cout << val << " ";
    }
    cout << endl;

    l.insert(next(l.begin(), 2), v.begin(), v.end());

    for(int val:l){
        cout << val << " ";
    }
    return 0;
}
```
```bash
10 20 30 
10 20 2 3 4 30
```

**---------------------------------------------------------------------------------------------------------------------------------------**

## myList.erase() -- Delete elements from a specific position -- O(N+K); where k is the number of elements to be deleted
```c++
#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int> l = {10, 20, 30, 40, 50, 60};
    list<int> l2 = {100, 200};
    vector<int> v = {2, 3, 4};

    for(int val:l){
        cout << val << " ";
    }
    cout << endl;

    l.erase(next(l.begin(), 3));

    for(int val:l){
        cout << val << " ";
    }
    return 0;
}
```
```bash
10 20 30 40 50 60 
10 20 30 50 60
```

-------------------------------------------------------------------------------------------------------------------------------------

```c++
#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int> l = {10, 20, 30, 40, 50, 60};
    list<int> l2 = {100, 200};
    vector<int> v = {2, 3, 4};

    for(int val:l){
        cout << val << " ";
    }
    cout << endl;

    l.erase(next(l.begin(), 2), next(l.begin(), 5));

    for(int val:l){
        cout << val << " ";
    }
    return 0;
}
```
```bash
10 20 30 40 50 60 
10 20 60
```

**-------------------------------------------------------------------------------------------------------------------------------------**

## replace(myList.begin(), myList.end(), value, replace_value) -- replace all the value with replace_value. not under a list STL -- O(N)
```c++
#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int> l = {10, 20, 30, 20, 20, 60};
    list<int> l2 = {100, 200};
    vector<int> v = {2, 3, 4};

    for(int val:l){
        cout << val << " ";
    }
    cout << endl;

    replace(l.begin(), l.end(), 20, 100);

    for(int val:l){
        cout << val << " ";
    }
    return 0;
}
```
```bash
10 20 30 20 20 60 
10 100 30 100 100 60
```

**-------------------------------------------------------------------------------------------------------------------------------------**

## find(myList.begin(), myList.end(), V) -- find the value V. Not under a list STL -- O(N)
```c++
#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int> l = {10, 20, 30, 20, 20, 60};
    list<int> l2 = {100, 200};
    vector<int> v = {2, 3, 4};

    for(int val:l){
        cout << val << " ";
    }
    cout << endl;

    auto it = find(l.begin(), l.end(), 200);
    
    if(it == l.end()){
        cout << "Not Found" << endl;
    }else{
        cout << "Found" << endl;
    }
    
    return 0;
}
```
```bash
10 20 30 20 20 60 
Not Found
```

----------------------------------------------------------------------------------------------------------------------------------------

```c++
#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int> l = {10, 20, 30, 20, 20, 60};
    list<int> l2 = {100, 200};
    vector<int> v = {2, 3, 4};

    for(int val:l){
        cout << val << " ";
    }
    cout << endl;

    auto it = find(l.begin(), l.end(), 20);
    
    if(it == l.end()){
        cout << "Not Found" << endl;
    }else{
        cout << "Found" << endl;
    }
    
    return 0;
}
```
```bash
10 20 30 20 20 60 
Found
```