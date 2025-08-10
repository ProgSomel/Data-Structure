# 23_6 STL Map
```c++
#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<string, int> mp;
    mp["Somel"] = 10;
    mp["Tamim"] = 20;
    cout << mp["Somel"] << endl;
    return 0;
}
```
```bash
10
```

----------------------------------------------------------------------------------------------------------

```c++
#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<string, int> mp;
    mp["Somel"] = 10;
    mp["Tamim"] = 20;
    cout << mp["So"] << endl;
    return 0;
}
```
```bash
0
```

----------------------------------------------------------------------------------------------------------

```c++
#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<string, int> mp;
    mp["Somel"] = 10; //? logN
    mp["Tamim"] = 20; //? logN
    for(auto it = mp.begin(); it!=mp.end(); it++){ //? NlogN
        // cout << (*it).first << " " << (*it).second << endl;
        cout << it->first << " " << it->second << endl; //? logN
    }
    return 0;
}
```
```bash
Somel 10
Tamim 20
```

----------------------------------------------------------------------------------------------------------

```c++
#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<string, int> mp;
    mp["Somel"] = 10; //? logN
    mp["Tamim"] = 20; //? logN
    for(auto it = mp.begin(); it!=mp.end(); it++){ //? NlogN
        // cout << (*it).first << " " << (*it).second << endl;
        cout << it->first << " " << it->second << endl; //? logN
    }
    if(mp.count("Somel")){
        cout << "Ache";
    }else{
        cout << "Nai";
    }
    return 0;
}
```
```bash
Somel 10
Tamim 20
Ache
```

