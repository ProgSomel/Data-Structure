## Vector Capacity functions

## v.capacity() -- Returns the current available capacity of the vector.O(1) , and if capacity is full then capacity becomes double
```c++
#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v;
    cout << v.capacity() << endl; //? 0
    v.push_back(1);
    cout << v.capacity() << endl; //? 1
    return 0;
}
```
```bash
0
1
```
**-----------------------------------------------------------------------------------------------------------------------------------------------**

## v.clear() -- Clears the vector elements. Do not delete the memory, only clear the value.O(N)
```c++
#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(20);
    v.push_back(40);
    cout << v.size() << endl; //? 4
    v.clear();
    cout << v.size() << endl; //? 0
    cout << v[1] << endl; //? 20 , because clear() only clears the size not delete the elements from the memory
    return 0;
}
```

**---------------------------------------------------------------------------------------------------------------------------------------------**

## v.empty() -- Return true/false if the vector is empty or not. O(1)
```c++
#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v;
    cout << v.empty() << endl; //? 1
    return 0;
}
```

**-----------------------------------------------------------------------------------------------------------------------------------------**

## v.resize() -- Change the size of the vector. O(K); where K is the difference between new size and current size.
```c++
#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    cout << v.size() << endl; //? 3
    for(int i = 0; i < v.size(); i++){
        cout << v[i] << " "; //? 10 20 30
    }
    cout << endl;
    v.resize(2);
    cout << v.size() << endl; //? 2
    for(int i = 0; i < v.size(); i++){
        cout << v[i] << " "; //? 10 20
    }
    return 0;
}
```

--------------------------------------------------------------------------------------------------------------------------------------------

```c++
#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    cout << v.size() << endl; //? 3
    for(int i = 0; i < v.size(); i++){
        cout << v[i] << " "; //? 10 20 30
    }
    cout << endl;
    v.resize(7, 100);
    cout << v.size() << endl; //? 7
    for(int i = 0; i < v.size(); i++){
        cout << v[i] << " "; //? 10 20 30 100 100 100 100
    }
    return 0;
}
```