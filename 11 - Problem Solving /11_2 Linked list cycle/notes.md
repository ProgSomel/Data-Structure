# Linked List Cycle
[Linked List Cycle](https://leetcode.com/problems/linked-list-cycle/)
```c++
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode* slow = head;
        ListNode* fast = head;

        while(fast!=NULL && fast->next!=NULL){
            slow = slow->next;
            fast = fast->next->next;
            if(slow == fast){
                return true;
            }
        }
        return false;
    }
};
```

-------------------------------------------------------------------------------------------------------------------------------------

```go
/**
 * Definition for singly-linked list.
 * type ListNode struct {
 *     Val int
 *     Next *ListNode
 * }
 */
func hasCycle(head *ListNode) bool {
    slow := head;
    fast := head;

     for{
        if fast!=nil && fast.Next!=nil{
            slow = slow.Next;
            fast = (fast.Next).Next;
            if(slow == fast){
                return true;
            }
        }else{
            break;
        }
     }
     return false;
}
```