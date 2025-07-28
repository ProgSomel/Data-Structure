#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; //? O(1)
    cin >> n; //? O(1)

    vector<int> v(n); //? O(N)
    for(int i = 0; i < n; i++){ //? O(N)*O(1) = O(N)
        cin >> v[i]; //? O(1)
    }
    for(int i = 0; i < n; i++){ //? O(N)*O(!) = O(N)
        if(v[i] > 0){
            v[i] = 1; //? O(1)
        }else if(v[i] < 0){
            v[i] = 2; //? O(!)
        }
    }
    for(int i = 0; i < n; i++){ //? O(N)*O(1) = O(N)
        cout << v[i] << " "; //? O(1)
    }
    return 0;
}
//! Time Complexity = O(1) + O(1) + O(N) + O(N) + O(N) + O(N) = O(N)