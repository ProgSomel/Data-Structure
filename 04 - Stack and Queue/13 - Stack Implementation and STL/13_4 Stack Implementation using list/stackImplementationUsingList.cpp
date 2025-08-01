#include<bits/stdc++.h>
using namespace std;

class Stack{
    public:
        list<int> l;

        void push(int val){
            l.push_back(val); //? --- O(1)
        }

        void pop(){
            l.pop_back(); //? --- O(1)
        }

        int top(){
            return l.back(); //? --- O(1)
        }

        int size(){
            return l.size(); //? --- O(1)
        }

        bool isEmpty(){
            return l.empty(); //? --- O(1)
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