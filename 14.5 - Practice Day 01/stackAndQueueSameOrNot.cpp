#include<bits/stdc++.h>
using namespace std;

void compareStackAndQueue(stack<int> s, queue<int> q){
    bool isSame = true;
    if (s.size() != q.size()) {
        isSame = false;
    }else {
        while (!s.empty() && !q.empty()) {
            if (s.top() != q.front()) {
                isSame = false;
                break;
            }
            s.pop();
            q.pop();
        }
    }
    if(isSame) cout << "YES" << endl;
    else cout << "NO" << endl;
}

int main()
{
    stack<int> s;
    queue<int> q;

    int n;
    cin >> n;
    while(n--){
        int val;
        cin >> val;
        s.push(val);
    }
    
    int m;
    cin >> m;
    while(m--){
        int val;
        cin >> val;
        q.push(val);
    }

    compareStackAndQueue(s, q);
    return 0;
}