# Vector Modifiers

## v= or v.assign() -- Assign another vector. O(N) if sizes are different, O(1) otherwise.
```c++
#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {1, 2, 3, 4, 5};
    vector<int> v2;
    v2 = v;

    for(int i = 0; i < v.size(); i++ ){
        cout << v2[i] << " "; //? 1 2 3 4 5 
    }
    return 0;
}
```

-------------------------------------------------------------------------------------------------------------------------------------------

```c++
#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {1, 2, 3, 4, 5};
    vector<int> v2;
    v2 = v;

    for(int x : v2){
        cout << x << " "; //? 1 2 3 4 5 
    }
    return 0;
}
```

**--------------------------------------------------------------------------------------------------------------------------------------**

## v.push_back() -- Add an element to the end. O(1)
```c++
#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {1, 2, 3, 4, 5};

    for(int x : v){
        cout << x << " "; //? 1 2 3 4 5
    }

    cout << endl;

    v.push_back(100);

    for(int x : v){
        cout << x << " "; //? 1 2 3 4 5 100
    }

    return 0;
}
```

**--------------------------------------------------------------------------------------------------------------------------------------**

## v.pop_back() -- Remove the last element. O(1)
```c++
#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {1, 2, 3, 4, 5};

    for(int x : v){
        cout << x << " "; //? 1 2 3 4 5
    }

    cout << endl;

    v.pop_back();

    for(int x : v){
        cout << x << " "; //? 1 2 3 4
    }

    return 0;
}
```

**--------------------------------------------------------------------------------------------------------------------------------------**

## v.insert() -- Insert elements at a specific position. O(N+K); where K is the number of elements to be inserted.
```c++
#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {1, 2, 3, 4, 5};

    for(int x : v){
        cout << x << " ";
    }
    cout << endl;

    v.insert(v.begin()+2, 100);
    for(int x : v){
        cout << x << " ";
    }

    return 0;
}#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {1, 2, 3, 4, 5};

    for(int x : v){
        cout << x << " "; //? 1 2 3 4 5
    }
    cout << endl;

    v.insert(v.begin()+2, 100);
    for(int x : v){
        cout << x << " "; //? 1 2 100 3 4 5
    }

    return 0;
}
```

----------------------------------------------------------------------------------------------------------------------------------------

```c++
#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {1, 2, 3, 4, 5};
    vector<int> v2 = {100, 200, 300};

    for(int x : v){
        cout << x << " "; //? 1 2 3 4 5
    }
    cout << endl;

    v.insert(v.begin()+2, v2.begin(), v2.end());
    for(int x : v){
        cout << x << " "; //? 1 2 100 200 300 3 4 5
    }

    return 0;
}
```

**--------------------------------------------------------------------------------------------------------------------------------------**

## v.erase() -- Delete elements from a specific position. O(N+K); where K is the number of elements to be deleted.
```c++
#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {1, 2, 3, 4, 5};
    vector<int> v2 = {100, 200, 300};

    for(int x : v){
        cout << x << " "; //? 1 2 3 4 5 
    }
    cout << endl;

    v.erase(v.begin()+2);
    for(int x : v){
        cout << x << " "; //? 1 2 4 5
    }

    return 0;
}
```

------------------------------------------------------------------------------------------------------------------------------------------

```c++
#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {1, 2, 3, 4, 5, 6};
    vector<int> v2 = {100, 200, 300};

    for(int x : v){
        cout << x << " "; //? 1 2 3 4 5 6
    }
    cout << endl;

    v.erase(v.begin()+2, v.end()-1);
    for(int x : v){
        cout << x << " "; //? 1 2 6
    }

    return 0;
}
```

**--------------------------------------------------------------------------------------------------------------------------------------**

## replace(v.begin(),v.end(),value,replace_value). Replace all the value with replace_value. Not under a vector. O(N)
```c++
#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {1, 2, 3, 2, 5, 2};

    for(int x : v){
        cout << x << " "; //? 1 2 3 2 5 2
    }
    cout << endl;

    replace(v.begin(), v.end(), 2, 100);

    for(int x : v){
        cout << x << " "; //? 1 100 3 100 5 100
    }

    return 0;
}
```

-----------------------------------------------------------------------------------------------------------------------------------------------

```c++
#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {1, 2, 3, 2, 5, 2};

    for(int x : v){
        cout << x << " "; //? 1 2 3 2 5 2
    }
    cout << endl;

    replace(v.begin(), v.end()-1, 2, 100);

    for(int x : v){
        cout << x << " "; //? 1 100 3 100 5 2
    }

    return 0;
}
```

**--------------------------------------------------------------------------------------------------------------------------------------**

## find(v.begin(),v.end(),V) -- Find the value V. Not under a vector. O(N)
**find will return an iterator**
```c++
#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {1, 2, 3, 2, 5, 2};

    for(int x : v){
        cout << x << " "; //? 1 2 3 2 5 2
    }
    cout << endl;

    // vector<int>:: iterator it = find(v.begin(), v.end(), 2);
    auto it = find(v.begin(), v.end(), 2);

    if(it == v.end()){
        cout << "Not Found" << endl;
    }else{
        cout << "Found" << endl; //? Found
    }

    return 0;
}
```

----------------------------------------------------------------------------------------------------------------------------------------

```c++
#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {1, 2, 3, 2, 5, 2};

    for(int x : v){
        cout << x << " ";
    }
    cout << endl;

    // vector<int>:: iterator it = find(v.begin(), v.end(), 2);
    auto it = find(v.begin(), v.end(), 2);

    cout << *it << endl; //? Here it is a pointer. So to get the value need to dereference it. *it will give found value, Here 2

    return 0;
}
```