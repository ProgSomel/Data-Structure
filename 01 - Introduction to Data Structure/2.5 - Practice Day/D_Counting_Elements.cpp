#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
cin >> n;                // O(1) — reading a single integer

vector<int> a(n);        // O(n) — allocate and default‐construct n ints

for (int i = 0; i < n; i++) {
    cin >> a[i];         // n iterations × O(1) each = O(n)
}

int count = 0;           // O(1)

for (int i = 0; i < n; i++) {             // outer loop runs n times
    auto it = find(a.begin(), a.end(),    // find() does up to n comparisons:
                   a[i] + 1);             //   each comparison is O(1)
                                          
    // so find(...) is O(n) in the worst case
    if (it != a.end()) {                  // pointer check = O(1)
        count++;
    }
}
// Total for this loop: n × O(n) = O(n²)

cout << count << endl;   // O(1)
return 0;                // O(1)

}