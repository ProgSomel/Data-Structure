#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while(t--){
    string s;
    getline(cin, s);
    stringstream ss(s);
    string word;
    map<string, int> mp;
    int maxValue = 0;
    string mxKey;
    while(ss >> word){
        if(mp[word]==maxValue){
            mxKey = word; 
        }
        mp[word]++;
        maxValue = max(mp[word], maxValue);
        
    }
    cout << mxKey << " " << maxValue << endl ;
    }

    return 0;
}