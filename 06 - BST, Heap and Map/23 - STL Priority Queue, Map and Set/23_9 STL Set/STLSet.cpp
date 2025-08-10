#include<bits/stdc++.h>
using namespace std;
int main()
{
    set<int> s;
    int n;
    cin >> n;
    while(n--){
        int val;
        cin >> val;
        s.insert(val); //? logN
    }
    for(auto it = s.begin(); it!=s.end(); it++){
        cout << *it << " ";
    }
    if(s.count(4)){ //? logN. we know if tree is very good then it is logN. Here set maintains a balanced tree thats why it's time complexity is logN
        cout << "Ache";
    }else{
        cout << "Nai";
    }
    return 0;
}