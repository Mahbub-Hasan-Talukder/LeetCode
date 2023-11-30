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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        
        ListNode* it = head;
        ListNode* prv;
        int len = 0;
        while(it){
            len++; it = it->next;
        }
        it = head;
        n = len - n +1;

        if(len==1 or n==1){
            return head->next;
        }
        else if(len==2){
            head->next = NULL;
            return head;
        }
        prv = head;
        it = head->next;
        for(int i=2;i<n;i++){
            prv = it;
            it = it->next;
        }
        // cout << prv->val << ' '  << it->val << ' ' << n << endl;
        prv->next = it->next;
        return head;
    }
};