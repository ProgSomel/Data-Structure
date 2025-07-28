#include<bits/stdc++.h>
using namespace std;

class myStack{
    public:

    vector<int> v;

    void push(int val){
        v.push_back(val);
    }

    void pop(){
            v.pop_back(); //? --- O(1)
    }

     int top(){
            return v.back(); //? --- O(1)
    }

    int findSize(){
        return v.size();
    }

    bool isEmpty(){
        return v.empty();
    }
};

void compareStacks(myStack s1, myStack s2){
        bool isSame = true;
        while(!s1.isEmpty()&&!s2.isEmpty()){
            if(s1.top()!=s2.top()){
                isSame = false;
                break;
            }
            s1.pop();
            s2.pop();
        }
        if(isSame) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

int main()
{
    myStack s1;
    myStack s2;

    int n;
    cin >> n;

    while(n--){
        int val;
        cin >> val;
        s1.push(val);
    }

    int m;
    cin >> m;
    while(m--){
        int val;
        cin >> val;
        s2.push(val);
    }

    int s1Size = s1.findSize();
    int s2Size = s2.findSize();

    if(s1Size!=s2Size){
        cout << "NO" << endl;
    }else{
        compareStacks(s1, s2);
    }
    return 0;
}