# 23_3 STL priority queue
## Maximum priority queue/maxHeap
```c++
#include<bits/stdc++.h>
using namespace std;
int main()
{
    priority_queue<int> pq;
    pq.push(10);
    pq.push(5);
    pq.push(30);
    cout << pq.top();

    return 0;
}
```
```bash
30
```

------------------------------------------------------------------------------------------------------------

```c++
#include<bits/stdc++.h>
using namespace std;
int main()
{
    priority_queue<int> pq;
    pq.push(10);
    pq.push(5);
    pq.push(30);
    cout << pq.top()<< endl;
    pq.push(100);
    cout << pq.top()<< endl;

    return 0;
}
```
```bash
30
100
```

**-----------------------------------------------------------------------------------------------------------**

## minimum priority queue/minHeap
```c++
#include<bits/stdc++.h>
using namespace std;
int main()
{
    //? minimum priority queue
    priority_queue<int, vector<int>, greater<int>> pq;
    pq.push(10);
    pq.push(5);
    pq.push(30);
    cout << pq.top()<< endl;
    pq.push(100);
    cout << pq.top()<< endl;
    pq.pop();
    pq.pop();
    cout << pq.top() << endl;
    return 0;
}
```
```bash
5
5
30
```

