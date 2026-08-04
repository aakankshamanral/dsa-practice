/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
bool isPalindrome(struct ListNode* head) {
    int top = -1;
    int stack[100000];
    struct ListNode *t;

    for (t = head ; t!=NULL ;t=t->next){
        stack[++top] = t->val;
    }
    for (t = head ; t!=NULL ; t=t->next){
        if(stack[top--]!= t->val) return false;
    }
    return true;
}