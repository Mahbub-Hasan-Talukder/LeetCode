/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if(!head or !head->next)return head;
        int len = 0;
        ListNode* it = head;
        while(it){
            len++; it = it->next;
        }
        k = k%len;
        if(k==0)return head;
        k = len - k;

        ListNode* last = head;
        it = head;
        for(int i=2;i<=len;i++){
            last = last->next;
            if(i==k)it = last;
        } 
        
        last->next = head;
        head = it->next;
        it->next = NULL;
        return head;
    }
};