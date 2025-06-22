#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, q;
    cin >> n >> q;
    vector<int> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }

    
    int x;
    cin >> x;
        
    int flag = 0;
    
    int l = 0;
    int r = n - 1;

    while (l<=r){
        /* code */
        int mid = (l+r)/2;
        if(v[mid] == x){
            flag = 1;
            break;
        }else if(x > v[mid]){
            l = mid+1;
        }else{
            r = mid - 1;
        }

    }
    

    if(flag == 1){
        cout << "found" << endl;
    }else{
        cout << "not found" << endl;
    }
    
    return 0;
}