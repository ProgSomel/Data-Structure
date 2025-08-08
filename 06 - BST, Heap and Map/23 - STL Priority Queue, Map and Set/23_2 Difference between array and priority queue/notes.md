# 23_2 Difference between array and priority queue
## 📊 Array vs Priority Queue

| Feature | Array | Priority Queue |
|---------|-------|----------------|
| **Definition** | A collection of elements stored in contiguous memory locations. | A data structure that retrieves elements based on priority rather than position. |
| **Ordering** | Order is as inserted (unless manually sorted). | Always ordered by priority (max-heap or min-heap). |
| **Access by Index** | ✅ O(1) – Direct access using index. | ❌ O(n) – Must search for a specific index. |
| **Get Max/Min** | ❌ O(n) – Need to scan all elements. | ✅ O(1) – Always available at the top. |
| **Insert Element** | ✅ O(1) – At the end (amortized in dynamic arrays). | ⚠️ O(log n) – Maintains heap property. |
| **Remove Max/Min** | ❌ O(n) – Need to find & shift elements. | ✅ O(log n) – Remove from top and reheapify. |
| **Memory Layout** | Contiguous memory. | Heap-structured (may be non-contiguous). |
| **Use Case** | Fast random access, fixed-size or sequential data storage. | Scheduling, simulations, task management, or anytime priority matters. |

---

### 📌 Visual Representation

#### Array (Sequential Storage)
[10] → [20] → [5] → [8] → [15]
(Index: 0 1 2 3 4)
```shell
#### Priority Queue (Max-Heap Example)
```
```markdown
    20
   /  \
 15    10
/  \   /
```
8 5

```shell
### 🔹 Key Takeaway
- Use **Array** when **index-based access speed** is most important.
- Use **Priority Queue** when **retrieving the highest/lowest priority element** efficiently is most important.
```

