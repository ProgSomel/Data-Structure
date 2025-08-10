# 23_4 Custom compare class
```c++
#include<bits/stdc++.h>
using namespace std;

class Student{
    public:
    string name;
    int roll;
    int marks;

    Student(string name, int roll, int marks){
        this->name = name;
        this->roll = roll;
        this->marks = marks;
    }
};

class cmp{
    public:
    bool operator()(Student l, Student r){ //? operator overloading
        if (l.marks < r.marks) return true;
        else return false;
    }
};

int main()
{
    priority_queue<Student, vector<Student>, cmp> pq;
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        string name;
        int roll, marks;
        cin >> name >> roll >> marks;
        Student obj(name, roll, marks);
        pq.push(obj);

    }
    while(!pq.empty()){
        cout << pq.top().name << " " << pq.top().roll << " " << pq.top().marks << endl;
        pq.pop();
    }
    return 0;
}
```
```bash
//input
3
sakib 25 92
rakib 12 85
akib 7 96
//output
akib 7 96
sakib 25 92
rakib 12 85
```

--------------------------------------------------------------------------------------------------------------

```c++
#include<bits/stdc++.h>
using namespace std;

class Student{
    public:
    string name;
    int roll;
    int marks;

    Student(string name, int roll, int marks){
        this->name = name;
        this->roll = roll;
        this->marks = marks;
    }
};

class cmp{
    public:
    bool operator()(Student l, Student r){ //? operator overloading
        return l.marks > r.marks; //? it will do ascending order. Because priority queue works opposite
    }
};

int main()
{
    priority_queue<Student, vector<Student>, cmp> pq;
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        string name;
        int roll, marks;
        cin >> name >> roll >> marks;
        Student obj(name, roll, marks);
        pq.push(obj);

    }
    while(!pq.empty()){
        cout << pq.top().name << " " << pq.top().roll << " " << pq.top().marks << endl;
        pq.pop();
    }
    return 0;
}
```
```bash
//input
3
sakib 25 92
rakib 12 85
akib 7 96
//output
rakib 12 85
sakib 25 92
akib 7 96
```

-----------------------------------------------------------------------------------------------------------

```c++
#include<bits/stdc++.h>
using namespace std;

class Student{
    public:
    string name;
    int roll;
    int marks;

    Student(string name, int roll, int marks){
        this->name = name;
        this->roll = roll;
        this->marks = marks;
    }
};

class cmp{
    public:
    bool operator()(Student l, Student r){ //? operator overloading
        if(l.marks > r.marks){
            return true;
        }else if(l.marks < r.marks){
            return false;
        }else{
            return l.roll > r.roll;
        }
    }
};

int main()
{
    priority_queue<Student, vector<Student>, cmp> pq;
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        string name;
        int roll, marks;
        cin >> name >> roll >> marks;
        Student obj(name, roll, marks);
        pq.push(obj);

    }
    while(!pq.empty()){
        cout << pq.top().name << " " << pq.top().roll << " " << pq.top().marks << endl;
        pq.pop();
    }
    return 0;
}
```
```bash
//input
3
sakib 25 85
rakib 12 85
akib 7 96

//output
rakib 12 85
sakib 25 85
akib 7 96
```
