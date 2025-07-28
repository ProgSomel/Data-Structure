# Space Complexity(Depends on array)

**Space Complexity means in the respect of input, how much memory it is taking**

```c++
int n;
cin >> n;
int sum = 0;//? O(1)
int x; //? O(1)
double d; //O(1)
```
**Space Complexity for the above code is O(1)**

---------------------------------------------------------------------------------------------------------------------------------------

```c++
int n;//?O(1)
cin >> n;
int sum = 0; //? O(1)
for(int i = 0; i<n; i++){ //? Here Space Complexity is nothing as no variable is intializing or using memory
    sum+=i;
}
cout << sum << endl;
return 0;
```
**Space Complexity of the above code is O(1)**

----------------------------------------------------------------------------------------------------------------------------------------------

```c++
int n;//?O(1)
cin >> n;
int a[n];
for(int i = 0; i<n; i++){ //? O(N)
    cin >> a[i];
}
cout << sum << endl;
return 0;
```
**Space Complexity of the above code is O(N)**

----------------------------------------------------------------------------------------------------------------------------------

```c++
int n;//?O(1)
cin >> n;
int a[n][n]; //? O((N*N))
for(int i = 0; i<n; i++){
    cin >> a[i][i];
}
cout << sum << endl;
return 0;
```
**Space Complexity of the above code is O(N*N) = O(N^2)**