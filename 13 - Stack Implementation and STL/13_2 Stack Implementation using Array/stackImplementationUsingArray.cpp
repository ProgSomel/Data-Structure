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
    st.push(10);
    st.push(20);
    st.push(30);

    cout << st.top() << endl;

    return 0;
}