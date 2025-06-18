#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n; //? O(1)
    if(n >=2){
        vector<int>a(n); //? O(N)
    for(int i = 0; i < n; i++){ //? O(N)
        cin >> a[i];
    }

    for(int i = 0; i < n; i++){ //? O(N)
        if (a[i] > 0) a[i] = 1;
        else if(a[i] < 0) a[i] = 2; 
    }
    for(int i = 0; i < n; i++){ //? O(N)
        if(i == n-1){
            cout << a[i];
        }else{
            cout << a[i] << " ";
        }
    }
    }

    return 0;
}