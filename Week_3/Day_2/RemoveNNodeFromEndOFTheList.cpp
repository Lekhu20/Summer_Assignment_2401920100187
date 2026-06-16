class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
       ListNode* ptr =new ListNode(0);
       ptr -> next = head ;
       ListNode* fast = ptr;
       ListNode* slow = ptr;
       for(int i = 0; i <= n; i++){
        fast = fast -> next;
       } 
       while(fast != NULL){
        fast = fast -> next;
        slow = slow -> next;
       }
       ListNode* cptr = slow -> next;
       slow -> next = slow -> next -> next;
       delete cptr;
       return ptr -> next;
    }
};
