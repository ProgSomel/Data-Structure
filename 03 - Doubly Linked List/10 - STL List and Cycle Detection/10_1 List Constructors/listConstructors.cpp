#include<bits/stdc++.h>
using namespace std;
int main()
{
    // list<int> l = {1, 2, 3, 4, 5};
    // int arr[] = {10, 20, 30, 40, 50};
    vector<int> v = {100, 200, 300, 400, 500};
    list<int> l2(v.begin(), v.end());
    for(int val: l2){
        cout << val << " ";
    }
    return 0;
}