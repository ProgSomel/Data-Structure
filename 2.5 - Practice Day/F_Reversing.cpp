#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n; //? O(1)
    vector<int> a(n); //? O(N)
    for(int i = 0; i < n; i++){ //? O(N) * O(1) = O(N)
        cin >> a[i]; //? O(1)
    }
    
    for(int i = n-1; i >= 0; i--){ //? O(N) * O(1) = O(N)
        cout << a[i] << " "; //? O(1)
    }
    return 0;
}
//! Time Complexity is = O(1) + O(n) + O(n) + O(n) = O(n) overall.