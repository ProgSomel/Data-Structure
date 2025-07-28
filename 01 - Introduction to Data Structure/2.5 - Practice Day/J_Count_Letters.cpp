#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s; //? O(1)

    vector<int> v(26, 0); //? O(1)
    for(int i = 0; i < s.length(); i++){ //? O(N)*O(1) = O(N)
        v[s[i]-'a']++;
    }
    for(int i = 0; i < 26; i++){ //? O(1)*O(1) = O(1)
        if(v[i] > 0){
            cout << char('a'+i) << " " <<":" << " " << v[i] << endl;
        }
    }
    return 0;
}

//! Time Complexity is = O(N)