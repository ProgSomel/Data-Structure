# List element access and iterators
# Element Access
## myList.back() -- Access the tail element -- O(1)
## myList.front() -- Access the head element -- O(1)
```c++
#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int> l = {10, 20, 30, 40, 50};
    cout << l.back() << endl;
    cout << l.front() << endl;
    return 0;
}
```
```bash
50
10
```

**-------------------------------------------------------------------------------------------------------------------------------------**

## next(myList.begin(), i) -- Access the ith element -- O(N)
```c++
#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int> l = {10, 20, 30, 40, 50};
    for(int val : l){
        cout << val << " ";
    }
    cout << endl;
    cout << *next(l.begin(), 1);
    return 0;
}
```
```bash
10 20 30 40 50 
20
```