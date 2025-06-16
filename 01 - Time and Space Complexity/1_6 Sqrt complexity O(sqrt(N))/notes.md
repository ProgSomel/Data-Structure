# Sqrt complexity O(sqrt(N))

```c++
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    for(int i = 1; i <= sqrt(n); i++){ //? O(sqrt(N)) 
        cout << i << endl;
    }
    return 0;
}
```
If n = 100 then loop will continue to 10. If n = 36 then loop will continue to 6.
It is neccessary when we want to find the divisior, if n = 36 and want to find the divisior of 36.
Divisiors of 36 are 1, 2, 3, 4, 6, 9, 12, 18, 36
```c++
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    for(int i = 1; i <= n; i++){
        if(n % i == 0){
            cout << i << " ";
        }
    }
    return 0;
}
```
```bash
//input
36
//output
1 2 3 4 5 6 9 12 18 26
```
This is not better way to find out the Divisiors.
The best one is below code
```c++
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    for(int i = 1; i <= sqrt(n); i++){
        if(n % i == 0){
            cout << i << " " << n / i << " ";
        }
    }
    return 0;
}
```
```bash
//input
36
//output
1 36 2 18 3 12 4 9 6 6 
```

---------------------------------------------------------------------------------------------------------------------------------------------

```c++
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    for(int i = 1; i * i <= n; i++){
        if(n % i == 0){
            cout << i << " " << n / i << " ";
        }
    }
    return 0;
}
```
**Here **i*i<=n** is same like **i<=sqrt(n)****