#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int> l = {10, 20, 30, 20, 20, 60};
    list<int> l2 = {100, 200};
    vector<int> v = {2, 3, 4};

    for(int val:l){
        cout << val << " ";
    }
    cout << endl;

    auto it = find(l.begin(), l.end(), 20);
    
    if(it == l.end()){
        cout << "Not Found" << endl;
    }else{
        cout << "Found" << endl;
    }
    
    return 0;
}