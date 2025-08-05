#include<bits/stdc++.h>
using namespace std;

void insert_heap(vector<int> &v, int val){
    v.push_back(val);
    int cur_idx = v.size()-1;
    int par_idx = (cur_idx-1)/2;
    while(cur_idx!=0){
        if(v[par_idx]<v[cur_idx]) swap(v[par_idx], v[cur_idx]);
        else break;
        cur_idx = par_idx;
    }
}

void delete_heap(vector<int> &v){
    v[0] = v.back();
    v.pop_back();
    int cur_idx = 0;
    while(true){
        int left_idx = cur_idx*2+1;
    int right_idx = cur_idx*2+2;
    int leftValue = INT_MIN, rightValue = INT_MIN;
    if(left_idx < v.size()) leftValue = v[left_idx];
    if(right_idx < v.size()) rightValue = v[right_idx];

    if(leftValue > rightValue && leftValue > v[cur_idx]){
        swap(v[cur_idx], v[leftValue]);
        cur_idx = left_idx;
    }else if(leftValue < rightValue && leftValue > v[cur_idx]){
        swap(v[right_idx], v[right_idx]);
        cur_idx = right_idx;
    }else break;
    }
}

void print_heap(vector<int> v){
    for(int val: v){
        cout << val << " ";
    }
    cout << endl;
}

int main()
{
    vector<int> v;
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        int val;
        cin >> val;
        insert_heap(v, val);
    }
    print_heap(v);
    delete_heap(v);
    print_heap(v);
    return 0;
}
//! Time Complexity is O(H)=> O(logN)
/**
//input
11
42 21 17 9 13 11 6 2 3 7 5
//output
42 21 17 9 13 11 6 2 3 7 5 
5 21 17 9 13 11 6 2 3 7
*/