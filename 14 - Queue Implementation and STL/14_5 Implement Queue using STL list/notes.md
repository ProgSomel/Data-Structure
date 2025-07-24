# Implement Queue using STL list

```c++
#include<bits/stdc++.h>
using namespace std;

class myQueue{
    public:
    
    list<int> l;

    void push(int val){ //? O(1)
        l.push_back(val);
    }

    void pop(){ //? O(1)
        l.pop_front();
    }

    int front(){ //? O(1)
        return l.front();
    }

    int back(){ //? O(1)
        return l.back();
    }

    int size(){
        return l.size();
    }

    bool empty(){
        return l.empty();
    }
};

int main()
{   
    myQueue q;
    int n;
    cin >> n;

    for(int i = 0; i < n; i++){
        int val;
        cin >> val;
        q.push(val);
    }
    
    while(!q.empty()){
        cout << q.front() << " ";
        q.pop();
    }

    return 0;
}
```
```bash
//input
5
10 20 30 40 50

//output
10 20 30 40 50
```