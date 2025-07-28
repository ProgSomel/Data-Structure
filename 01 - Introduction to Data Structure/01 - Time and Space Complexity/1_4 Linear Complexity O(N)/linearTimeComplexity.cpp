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

//! Total Complexity of this code ---> O(n), because here O(n) is larger among other values