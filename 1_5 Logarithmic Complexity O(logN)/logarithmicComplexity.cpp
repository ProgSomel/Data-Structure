#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; //? O(1)
    cin >> n; //? O(1)

    int k = 2;

    for(int i = 1; i < n; i++){ //? O(logN) --- accurate answer id O(log2^N) because k is 2, if k is not given then value will be O(logk^N)
        cout << endl;
        i = i * k; //? Check here
    }
    return 0;
}