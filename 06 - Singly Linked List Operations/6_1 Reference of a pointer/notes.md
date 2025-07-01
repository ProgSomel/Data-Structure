# Reference of a pointer

```c++
#include<bits/stdc++.h>
using namespace std;

void func(int* p){
    cout << "In Function: " << *p << endl; //? In Function: 10
}

int main()
{
    int x = 10;
    int* p = &x;
    func(p);
    cout << "In Main: " << *p << endl; //? In Main: 10
    return 0;
}
```

------------------------------------------------------------------------------------------------------------------------------------

```c++
#include<bits/stdc++.h>
using namespace std;

void func(int* p){
    *p = 100;
    // cout << "In Function: " << *p << endl;
}

int main()
{
    int x = 10;
    int* p = &x;
    func(p);
    cout << "In Main: " << *p << endl; //? In Main: 100
    return 0;
}
```

----------------------------------------------------------------------------------------------------------------------------------------

```c++
#include<bits/stdc++.h>
using namespace std;

void func(int* p){
    int y = 100;
    p = &y;
    // cout << "In Function: " << *p << endl;
}

int main()
{
    int x = 10;
    int* p = &x;
    func(p);
    cout << "In Main: " << *p << endl;
    return 0;
}#include<bits/stdc++.h>
using namespace std;

void func(int* p){
    int y = 100;
    p = &y;
    // cout << "In Function: " << *p << endl;
}

int main()
{
    int x = 10;
    int* p = &x;
    func(p);
    cout << "In Main: " << *p << endl; //? In Main: 10
    return 0;
}
```

--------------------------------------------------------------------------------------------------------------------------------------------

```c++
#include<bits/stdc++.h>
using namespace std;

void func(int* p){
    int y = 100;
    p = &y;
    cout << "In Function: " << &p << endl;
}

int main()
{
    int x = 10;
    int* p = &x;
    func(p);
    cout << "In Main: " << &p << endl;
    return 0;
}#include<bits/stdc++.h>
using namespace std;

void func(int* p){
    int y = 100;
    p = &y;
    cout << "In Function: " << &p << endl;
}

int main()
{
    int x = 10;
    int* p = &x;
    func(p);
    cout << "In Main: " << &p << endl;
    return 0;
}
```
```bash
In Function: 0x7ffc49905e18
In Main: 0x7ffc49905e50
```

---------------------------------------------------------------------------------------------------------------------------------------

```c++
#include<bits/stdc++.h>
using namespace std;

void func(int* &p){ //? &p -- reference of pointer. Here it will recieve same pointer as main function not a copy of pointer of main function
    int y = 100;
    p = &y;
    cout << "In Function: " << &p << endl;
}

int main()
{
    int x = 10;
    int* p = &x;
    func(p);
    cout << "In Main: " << &p << endl;
    return 0;
}
```
```bash
In Function: 0x7ffe24e6a9a0
In Main: 0x7ffe24e6a9a0
```