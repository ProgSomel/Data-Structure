#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {1, 2, 3, 2, 5, 2};

    for(int x : v){
        cout << x << " ";
    }
    cout << endl;

    // vector<int>:: iterator it = find(v.begin(), v.end(), 2);
    auto it = find(v.begin(), v.end(), 2);

    cout << *it << endl; //? Here it is a pointer. So to get the value need to dereference it. *it will give found value

    return 0;
}