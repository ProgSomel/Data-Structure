# Vector input and output
```c++
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n; //? 5
              //? 10 20 30 40 50

    vector<int> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    for(int i = 0; i < n; i++){
        cout << v[i] << " "; //? 10 20 30 40 50
    return 0;
}
```
-----------------------------------------------------------------------------------------------------------------------------------------

```c++
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    vector<int> v;
    for(int i = 0; i < n; i++){
        cin >> v[i]; //? Error: Command failed: timeout 7 ./Main
    }
    for(int i = 0; i < n; i++){
        cout << v[i] << " ";
    }
    return 0;
}
```
