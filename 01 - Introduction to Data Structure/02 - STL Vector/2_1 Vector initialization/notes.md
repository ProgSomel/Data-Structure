# Vector initialization

**STL** -- Standard Template Library
## Construct a vector with 0 elements.
```c++
#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v; //? O(1)
    cout << v.size() << endl;
    return 0;
}
```
```bash
//output
0
```

----------------------------------------------------------------------------------------------------------------------------------------------------

## Construct a vector with N elements.
```c++
#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v(5); //? O(N)
    cout << v.size() << endl;
    return 0;
}
```
```bash
//output
5
```

------------------------------------------------------------------------------------------------------------------------------------

## Construct a vector with N elements and the value will be V.
```c++
#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v(5, 5); //? O(N)
    for(int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }
    return 0;
}
```
```bash
//output
5 5 5 5 5
```

--------------------------------------------------------------------------------------------------------------------------------------

Construct a vector by copying another vector v2.
```c++
#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v(5, 5); //? O(N)
    vector<int> v2(v); //? O(N)
    for(int i = 0; i < v2.size(); i++){
        cout << v2[i] << " ";
    }
    return 0;
}
```
```bash
//output
5 5 5 5 5 
```

-----------------------------------------------------------------------------------------------------------------------------------------

## Construct a vector by copying all elements from an array A of size N.
```c++
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[5] = {1, 2, 3, 4, 5};
    vector<int>v(a, a+5);
    for(int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }
    return 0;
}
```
```bash
1 2 3 4 5 
```

----------------------------------------------------------------------------------------------------------------------------------------

## Initializing like array
```c++
#include<bits/stdc++.h>
using namespace std;
int main()
{
    
    vector<int>v = {1, 2, 3, 4, 5};
    for(int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }
    return 0;
}
```
```bash
1 2 3 4 5
```