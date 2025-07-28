# Time Complexity for Selection Sort
```c++
for(int i = 0; i <n-1; i++){
    int minIdx = i;
    for(int j = j+1; j <n; j++){
        if(arr[j] < arr[minIdx]){
            minIdx = j;
        }
    }
    swap(arr[i], arr[minIdx])
}
```
![Selection Sort 1](assets/selectionSort1.png)
![Selection Sort 2](assets/selectionSort2.png)