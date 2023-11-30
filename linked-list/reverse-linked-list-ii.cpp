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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if(left==right)return head;

        ListNode* prv;
        ListNode* now;
        ListNode* it = head;
        int cnt=1;
        while(it){
            if(cnt==left)prv = new ListNode(it->val);
            else if(cnt>left and cnt<=right){
                now = new ListNode(it->val);
                now->next = prv;
                prv = now;
            }
            cnt++;
            it = it->next;
        }
        it = head;
        cnt = 1;
        while(cnt<left and it){
            cnt++; it = it->next;
        }
        while(it and prv and cnt<=right){
            it->val = prv->val;
            it = it->next; prv = prv->next;
        }
        
        return head;
    }
};