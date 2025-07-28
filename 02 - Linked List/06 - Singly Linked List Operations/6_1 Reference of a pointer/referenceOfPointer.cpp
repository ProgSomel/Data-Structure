#include<bits/stdc++.h>
using namespace std;

void func(int* &p){
    int y = 100;
    p = &y;
    cout << "In Function: " << &p << endl;
}

int main()
{
    int x = 10;
    int* p = &x;
    func(p);
    cout << "In Main: " << p << endl;
    return 0;
}