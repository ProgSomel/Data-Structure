#include<bits/stdc++.h>
using namespace std;

bool cmp(pair<string, int> l, pair<string, int> r){
    if(l.first == r.first) return l.second > r.second;
    return l.first < r.first;
}

int main()
{
    int n;
    cin >> n;
    vector<pair<string,int>> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i].first >> v[i].second;
    }
    sort(v.begin(), v.end(), cmp);
    for(auto it = v.begin(); it != v.end(); it++){
        cout << it->first << " " << it->second << endl;
    }
    return 0;
}