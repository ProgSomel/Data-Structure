# Linear Complexity -- O(N)

```c++
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; //?--- O(1)
    cin >> n; //? --- O(1)

    for(int i = 0; i < n; i++){ //? --- O(n)
        cout << i << " ";
    }
    return 0; //? --- O(1)
}
```
**Total Complexity of this code ---> O(n), because here O(n) is larger among other values**

--------------------------------------------------------------------------------------------------------------------------------------

```c++
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; //?--- O(1)
    cin >> n; //? --- O(1)

    for(int i = 0; i < n/2; i++){ //? --- O(n)
        cout << i << " ";
    }
    return 0; //? --- O(1)
}
```
**Total Complexity of this code ---> O(n), because here O(n) is larger among other values**

------------------------------------------------------------------------------------------------------------------------------------

```c++
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; //?--- O(1)
    cin >> n; //? --- O(1)

    for(int i = 0; i < 2n; i++){ //? --- O(n)
        cout << i << " ";
    }
    return 0; //? --- O(1)
}
```
**Total Complexity of this code ---> O(n), because here O(n) is larger among other values**


---------------------------------------------------------------------------------------------------------------------------------------

```c++
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; //?--- O(1)
    cin >> n; //? --- O(1)

    for(int i = 0; i < n; i+=2){ //? --- O(n)
        cout << i << " ";
    }
    return 0; //? --- O(1)
}
```
**Total Complexity of this code ---> O(n), because here O(n) is larger among other values**

-----------------------------------------------------------------------------------------------------------------------------------------------------

```c++
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; //?--- O(1)
    cin >> n; //? --- O(1)

    for(int i = 0; i < n; i+=2){ //? --- O(n)
        cout << i << " ";
    }

    cout << endl; //? --- O(1)

    for(int i = 0; i < n; i++){ //? --- O(n)
        cout << i << " ";
    }
    return 0; //? --- O(1)
}
```
**Total Complexity of this code ---> O(n), because here O(n) is larger among other values**

---------------------------------------------------------------------------------------------------------------------------------------

**N Factorial**
```c++
int fact = 1; //? 1
for(int i = 1; i <= n; i++){ //? N
    fact *= i; //? 1
} //? --- O(N*1) = O(n)

//? Total time Complexity of this code is = O(1)+ O(N) = O(N)
```

------------------------------------------------------------------------------------------------------------------------------------------

**Kadane's Algorithm**
```c++
int currSum = 0, ans = INT_MIN; //? 1
for(int i = 0; i <n; i++){ //? N
    currSum += arr[i]; //? 1
    ans = max(currSum, ans); //? 1
    currSum = currSum < 0 ? 0 : currSum; //? 1
} //? n*1*1*1 = n

//? Total time Complexity of this code is = O(1)+ O(N) = O(N)
```

--------------------------------------------------------------------------------------------------------------------------------------------

**Nth Fibonacci - DP**
```c++
for(int i = 2; i <= n; i++){ //? N
    dp[i] = dp[i-1] + dp[i-2];
}
//? Total time Complexity of this code is = O(N)
```