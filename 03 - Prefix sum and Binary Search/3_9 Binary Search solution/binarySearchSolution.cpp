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
