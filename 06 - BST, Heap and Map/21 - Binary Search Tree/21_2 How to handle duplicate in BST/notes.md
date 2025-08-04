# How to handle duplicate in BST
 A classic **BST (Binary Search Tree)** does not allow **duplicates**: every value in the **left subtree** is strictly **less than** the current node, and every value in the **right subtree** is **greater than** the current node.

However, in practice, there are **several common ways to handle duplicates** in a BST:
## Store a Count With Each Node
- Each node contains an **extra field (like count)** to keep track of how many times a value occurs.
- When inserting a duplicate, just increment the count.