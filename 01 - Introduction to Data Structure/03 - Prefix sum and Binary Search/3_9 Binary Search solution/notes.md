# Binary Search solution
```c++
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, q;
    cin >> n >> q; //? O(1): reading two integers
    vector<int> v(n); //? O(n): allocate & default-construct n ints
    for(int i = 0; i < n; i++){ //? loop runs n times
        cin >> v[i];            //?   O(1) each → O(n) total
    }

    sort(v.begin(), v.end()); //? O(n log n): C++ introsort average/worst

    while(q--){ //? runs q times
        int x; 
        cin >> x; //? O(1)
        
        int flag = 0; //? O(1)
        
        int l = 0, r = n-1;//? O(1)

        while(l<=r){//? O(log n) iterations
            int mid = (l+r)/2;  // O(1)
            if(v[mid] == x){   // O(1)
                flag = 1;      // O(1)
                break;
            }else if(x > v[mid]){ // O(1)
                l = mid + 1; // O(1)
            }else{
                r = mid - 1; // O(1)
            }
        }

        if(flag == 1){
            cout << "found" << endl; // O(1)
        }else{
            cout << "not found" << endl; // O(1)
        }
    }
    return 0; // O(1)
}

```
**Summing up the dominant costs**
1. Build & sort
- Input + allocation: O(n)
- Sort: O(n log n)

2. Answering 𝑞 queries

- Each query does a binary search in **O(log n)**
- Across q queries → **O(q · log n)**

**📝 Overall Time Complexity**
O(n)+O(nlogn)+O(qlogn)= O(nlogn+qlogn)

if q is on the same order as n, you can simplify to **O((n+q)logn)**

in the program:
n = 10^5;
so, nlogn = 10^5*log10^5 = 1.7*10^6 < 10^7
