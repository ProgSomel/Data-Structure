#include<bits/stdc++.h>
using namespace std;
int main()
{
    // list<int> l = {1, 2, 3, 4, 5};
    // int arr[] = {10, 20, 30, 40, 50};
    vector<int> v = {100, 200, 300, 400, 500};
    list<int> l2(v.begin(), v.end());
    // l2.clear();
    cout << "Size: " << l2.size() << endl;
    for(int val: l2){
        cout << val << " ";
    }
    cout << endl;
    l2.resize(10);
    for(int val: l2){
        cout << val << " ";
    }
    cout << endl;
    cout << "Size: " << l2.size() << endl;
    return 0;
}