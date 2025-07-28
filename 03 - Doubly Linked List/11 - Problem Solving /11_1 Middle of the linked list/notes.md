# Middle of the linked list
[Middle of the linked list](https://leetcode.com/problems/middle-of-the-linked-list/)
```c++
class Solution {
public:
    int findSize(ListNode* head){
        ListNode* tmp = head;
        int count = 0;
        while(tmp!=NULL){
            count++;
            tmp = tmp->next;
        }
        return count;
    }
    ListNode* middleNode(ListNode* head) {
        ListNode* tmp = head;
        if(tmp->next==NULL){
            return tmp;
        }
        int size = findSize(head);
        int pos = size/2;
        for(int i = 0; i < pos-1; i++){
            tmp = tmp->next;
        }
        return tmp->next;
    }
};
```
