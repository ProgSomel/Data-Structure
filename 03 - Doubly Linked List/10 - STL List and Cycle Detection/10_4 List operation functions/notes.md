# List operation functions

## myList.remove(V) -- remove the value V from the list -- O(N)
```c++
#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int> l = {20, 30, 10, 50, 30, 60, 60, 10};
    for(int val : l){
        cout << val << " ";
    }
    cout << endl;
    l.remove(10);
    for(int val : l){
        cout << val << " ";
    }
    return 0;
}
```
```bash
20 30 10 50 30 60 60 10 
20 30 50 30 60 60
```

**--------------------------------------------------------------------------------------------------------------------------------------**

## myList.sort() -- Sort the list in ascending order -- O(NlogN)
```c++
#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int> l = {20, 30, 10, 50, 30, 60, 60, 10};
    for(int val : l){
        cout << val << " ";
    }
    cout << endl;
    l.sort();
    for(int val : l){
        cout << val << " ";
    }
    return 0;
}
```
```bash
20 30 10 50 30 60 60 10 
10 10 20 30 30 50 60 60
```

**--------------------------------------------------------------------------------------------------------------------------------------**

## myList.sort(greater<type>()) -- Sort the list descending order -- O(NlogN)
```c++
#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int> l = {20, 30, 10, 50, 30, 60, 60, 10};
    for(int val : l){
        cout << val << " ";
    }
    cout << endl;
    l.sort(greater<int>());
    for(int val : l){
        cout << val << " ";
    }
    return 0;
}
```
```bash
20 30 10 50 30 60 60 10 
60 60 50 30 30 20 10 10
```

**--------------------------------------------------------------------------------------------------------------------------------------**

## myList.unique() -- Delete the duplicate values from the list. You must sort the list first. -- O(N), with sort O(NlogN)
```c++
#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int> l = {20, 30, 10, 50, 30, 60, 60, 10};
    for(int val : l){
        cout << val << " ";
    }
    cout << endl;
    l.sort();
    l.unique();
    for(int val : l){
        cout << val << " ";
    }
    return 0;
}
```
```bash
20 30 10 50 30 60 60 10 
10 20 30 50 60
```

**--------------------------------------------------------------------------------------------------------------------------------------**

## myList.reverse() -- Reverse the list -- O(N)
```c++
#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int> l = {20, 30, 10, 50, 30, 60, 60, 10};
    for(int val : l){
        cout << val << " ";
    }
    cout << endl;
    l.reverse();
    for(int val : l){
        cout << val << " ";
    }
    return 0;
}
```
```bash
20 30 10 50 30 60 60 10 
10 60 60 30 50 10 30 20
```