# List Capacity functions

## myList.size() -- returns the size of the list -- O(1)

**-------------------------------------------------------------------------------------------------------------------------------------**

## myList.max_size() -- returns the maximum size that the list can hold(device specific) -- O(1)

**-------------------------------------------------------------------------------------------------------------------------------------**

## myList.clear() -- clears the list elements, do not delete the memory, only clear the list -- O(N)
```c++
#include<bits/stdc++.h>
using namespace std;
int main()
{
    // list<int> l = {1, 2, 3, 4, 5};
    // int arr[] = {10, 20, 30, 40, 50};
    vector<int> v = {100, 200, 300, 400, 500};
    list<int> l2(v.begin(), v.end());
    l2.clear();
    cout << "Size: " << l2.size() << endl;
    for(int val: l2){
        cout << val << " ";
    }
    return 0;
}
```
```bash
Size: 0
```

**-------------------------------------------------------------------------------------------------------------------------------------**

## myList.empty() -- change the size of the list -- O(1)
```c++
#include<bits/stdc++.h>
using namespace std;
int main()
{
    // list<int> l = {1, 2, 3, 4, 5};
    // int arr[] = {10, 20, 30, 40, 50};
    vector<int> v = {100, 200, 300, 400, 500};
    list<int> l2(v.begin(), v.end());
    l2.clear();
    cout << "Size: " << l2.size() << endl;
    if(l2.empty()){
        cout << "List is Empty" << endl;
    }
    for(int val: l2){
        cout << val << " ";
    }
    return 0;
}
```
```bash
Size: 0
List is Empty
```

----------------------------------------------------------------------------------------------------------------------------------

```c++
#include<bits/stdc++.h>
using namespace std;
int main()
{
    // list<int> l = {1, 2, 3, 4, 5};
    // int arr[] = {10, 20, 30, 40, 50};
    vector<int> v = {100, 200, 300, 400, 500};
    list<int> l2(v.begin(), v.end());
    // l2.clear();
    cout << "Size: " << l2.size() << endl;
    if(l2.empty()){
        cout << "List is Empty" << endl;
    }
    for(int val: l2){
        cout << val << " ";
    }
    return 0;
}
```
```bash
Size: 5
100 200 300 400 500
```

**-------------------------------------------------------------------------------------------------------------------------------------**

## myList.resize() -- change the size of the list -- O(K); where k is the difference between new size and current size
```c++
#include<bits/stdc++.h>
using namespace std;
int main()
{
    // list<int> l = {1, 2, 3, 4, 5};
    // int arr[] = {10, 20, 30, 40, 50};
    vector<int> v = {100, 200, 300, 400, 500};
    list<int> l2(v.begin(), v.end());
    // l2.clear();
    cout << "Size: " << l2.size() << endl;
    for(int val: l2){
        cout << val << " ";
    }
    cout << endl;
    l2.resize(2);
    for(int val: l2){
        cout << val << " ";
    }
    cout << endl;
    cout << "Size: " << l2.size() << endl;
    return 0;
}
```
```bash
Size: 5
100 200 300 400 500 
100 200 
Size: 2
```

-------------------------------------------------------------------------------------------------------------------------------------

```c++
#include<bits/stdc++.h>
using namespace std;
int main()
{
    // list<int> l = {1, 2, 3, 4, 5};
    // int arr[] = {10, 20, 30, 40, 50};
    vector<int> v = {100, 200, 300, 400, 500};
    list<int> l2(v.begin(), v.end());
    // l2.clear();
    cout << "Size: " << l2.size() << endl;
    for(int val: l2){
        cout << val << " ";
    }
    cout << endl;
    l2.resize(10);
    for(int val: l2){
        cout << val << " ";
    }
    cout << endl;
    cout << "Size: " << l2.size() << endl;
    return 0;
}
```
```bash
Size: 5
100 200 300 400 500 
100 200 300 400 500 0 0 0 0 0 
Size: 10
```