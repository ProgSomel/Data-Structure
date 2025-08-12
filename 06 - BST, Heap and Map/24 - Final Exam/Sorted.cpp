#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        list<int> l;
        while(n--){
            int val;
            cin >> val;
            
            l.push_back(val);
        }
        set<int> s;
        for(int val : l){
            s.insert(val);
        }
        for(auto it = s.begin(); it!=s.end(); it++){
            cout << *it << " ";
        }
        cout << endl;

    }
    return 0;
}