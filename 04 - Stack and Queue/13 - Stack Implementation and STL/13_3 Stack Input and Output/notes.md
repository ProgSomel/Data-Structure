# Stack Input and Output

```c++
#include<bits/stdc++.h>
using namespace std;

class Stack{
    public:
        vector<int> v;

        void push(int val){
            v.push_back(val); //? --- O(1)
        }

        void pop(){
            v.pop_back(); //? --- O(1)
        }

        int top(){
            return v.back(); //? --- O(1)
        }

        int size(){
            return v.size(); //? --- O(1)
        }

        bool isEmpty(){
            return v.empty(); //? --- O(1)
        }
};

int main()
{
    Stack st;
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        st.push(x);
    }


    return 0;
}
```

----------------------------------------------------------------------------------------------------------------------------------

```c++
#include<bits/stdc++.h>
using namespace std;

class Stack{
    public:
        vector<int> v;

        void push(int val){
            v.push_back(val); //? --- O(1)
        }

        void pop(){
            v.pop_back(); //? --- O(1)
        }

        int top(){
            return v.back(); //? --- O(1)
        }

        int size(){
            return v.size(); //? --- O(1)
        }

        bool isEmpty(){
            return v.empty(); //? --- O(1)
        }
};

int main()
{
    Stack st;
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        st.push(x);
    }

    while(!st.isEmpty()){
        cout << st.top() << " ";
        st.pop();
    }


    return 0;
}
```
```bash
//Input
5
10 20 30 40 50
//Output
50 40 30 20 10
```