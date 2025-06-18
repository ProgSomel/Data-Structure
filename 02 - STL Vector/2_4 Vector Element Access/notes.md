# Vector Element Access

## v[i] -- Access the ith element. O(1)

```c++
#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {10, 20, 30, 40, 50};
    cout << v[3] << endl; //? 40
    return 0;
}
```

**----------------------------------------------------------------------------------------------------------------------------------------**

## v.at(i) -- Access the ith element. O(1)

```c++
#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {10, 20, 30, 40, 50};
    cout << v.at(3) << endl; //? 40
    return 0;
}
```

**----------------------------------------------------------------------------------------------------------------------------------------**

## v.back() -- Access the last element. O(1)

```c++
#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {10, 20, 30, 40, 50};
    cout << v.back() << endl; //? 50
    return 0;
}
```

---

```c++
#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {10, 20, 30, 40, 50};
    cout << v[v.size()-1] << endl; //? 50
    return 0;
}
```

**----------------------------------------------------------------------------------------------------------------------------------------**

## v.front() -- Access the first element. O(1)
```c++
#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {10, 20, 30, 40, 50};
    cout << v.front() << endl; //? 10
    return 0;
}
```
------------------------------------------------------------------------------------------------------------------------------------------

```c++
#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {10, 20, 30, 40, 50};
    cout << v[0] << endl; //? 10
    return 0;
}
```