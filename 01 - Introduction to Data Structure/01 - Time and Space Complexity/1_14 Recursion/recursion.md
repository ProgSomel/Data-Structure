# Time Complexity for Recursion

```c++
int factorial(int n){
    if(n == 0){
        return 1l
    }
    return n * factorial(n-1);
}
```
![Recursion Part 1](assets/recursion1.png)
![Recursion Part 2](assets/recursion2.png)
![Recursion Part 3](assets/recursion3.png)
![Recursion Part 4](assets/recursion4.png)

# Space Complexity for Recursion
![Recursion Space Complexity 1](assets/recursionSpace1.png)
![Recursion Space Complexity 2](assets/recursionSpace2.png)

----------------------------------------------------------------------------------------------------------------------------------------

**Recursive Fibonacci**
## Time Complexity
```c++
int fib(int n){
    if(n == 0 || n == 1){
        return n;
    }

    return fib(n-1) + fib(n-2);
}
```
![Fibonacci 1](assets/fibonacci1.png)
![Fibonacci 2](assets/fibonacci2.png)
![Fibonacci 3](assets/fibonacci3.png)

Here, a = first value; r = common difference; 

![Fibonacci 4](assets/fibonacci4.png)

## Space Complexity
![Fibonacci Space Complexity](assets/fibonacciSpace.png)

