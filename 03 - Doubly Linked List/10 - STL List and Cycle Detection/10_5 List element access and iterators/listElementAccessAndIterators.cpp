#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int> l = {10, 20, 30, 40, 50};
    for(int val : l){
        cout << val << " ";
    }
    cout << endl;
    cout << *next(l.begin(), 1);
    return 0;
}