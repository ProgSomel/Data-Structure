#include<bits/stdc++.h>
using namespace std;

void printList(list<int>l){
    for(int val:l){
        cout << val << " ";
    }
    cout << endl;
}

void printListReverse(list<int>l){
    l.reverse();
    for(int val:l){
        cout << val << " ";
    }
    cout << endl;
}


int main()
{
    list<int>l;
    int q;
    cin >> q;
    while(q--){
        int x, v;
        cin >> x >> v;
        int size = l.size();
        if(x > size){
            cout << "Invalid" << endl;
        }else if(x == 0){
            l.push_front(v);
            printList(l);
            printListReverse(l);
        }else if(x == size){
            l.push_back(v);
            printList(l);
            printListReverse(l);
        }else{
            l.insert(next(l.begin(), x), v);
            printList(l);
            printListReverse(l);
        }
    }
    return 0;
}