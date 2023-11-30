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
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(k==1)return head;

        int cnt = 0;
        ListNode* it = head;
        ListNode* prv;
        ListNode* cur;
        ListNode* rev;
        while(it){
           if(cnt==0){
               rev = it;
               cur = new ListNode(it->val);
           }
           else{
               prv = cur;
               cur = new ListNode(it->val);
               cur->next = prv;
           }
           cnt++;
            if(cnt==k){
                for(int x = 0; x<cnt; x++){
                    rev->val = cur->val;
                    rev = rev->next;
                    cur = cur->next;
                }
                cnt = 0;
            }
           it = it->next;
        }
        return head;
    }
};