#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<string, int> mp;
    mp["Somel"] = 10; //? logN
    mp["Tamim"] = 20; //? logN
    for(auto it = mp.begin(); it!=mp.end(); it++){ //? NlogN
        // cout << (*it).first << " " << (*it).second << endl;
        cout << it->first << " " << it->second << endl; //? logN
    }
    if(mp.count("Somel")){
        cout << "Ache";
    }else{
        cout << "Nai";
    }
    return 0;
}