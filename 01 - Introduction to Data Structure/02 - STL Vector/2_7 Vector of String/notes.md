# Vector of String
```c++
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n; //? 5
    vector<string> v(n);

    for(int i = 0; i < n; i++){
        cin >> v[i]; //? Rakib Sakib Akib Rifat Sifar

    }

    for(string s:v){
        cout << s << " "; //? Rakib Sakib Akib Rifat Sifar
    }
    return 0;
}
```
------------------------------------------------------------------------------------------------------------------------------------------------------

```c++
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    cin.ignore();
    vector<string> v(n);

    for(int i = 0; i < n; i++){
        getline(cin, v[i]);
    }

    for(string s:v){
        cout << s << endl;
    }
    return 0;
}
```
```bash
//input
5
Rakib khan
Sakib khan
Akib khan
Rifat khan
Sifat khan

//output
Rakib khan
Sakib khan
Akib khan
Rifat khan
Sifat khan
```
