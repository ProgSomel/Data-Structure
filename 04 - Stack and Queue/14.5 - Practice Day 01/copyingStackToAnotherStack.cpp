#include<bits/stdc++.h>
using namespace std;

void copyStackToAnotherStack(stack<int> s){
    stack<int> copyStack;
    while(!s.empty()){
        copyStack.push(s.top());
        s.pop();
    }

    while(!copyStack.empty()){
        cout << copyStack.top() << " ";
        copyStack.pop();
    }
}

int main()
{
    stack<int> s;
    int n;
    cin >> n;
    while(n--){
        int val;
        cin >> val;
        s.push(val);
    }
    copyStackToAnotherStack(s);
    return 0;
}