#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    vector<int>a(n); //? O(N)
    for(int i = 0; i < n; i++){ //? O(N)
        cin >> a[i];
    }
    vector<int>b(n); //? O(N)
    for(int i = 0; i < n; i++){ //? O(N)
        cin >> b[i];
    }
    vector<int>c; //? O(1)
    for(int i = 0; i < n; i++){ //? O(N)
        c.push_back(b[i]);
    }
    for(int i = 0; i < n; i++){ //? O(N)
        c.push_back(a[i]);
    }

    for(int val : c){ //? O(N)
        cout << val << " ";
    }
    return 0;
}