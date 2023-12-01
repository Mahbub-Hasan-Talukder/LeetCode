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
    ListNode* deleteDuplicates(ListNode* head) {
        if(!head or !head->next)return head;
        unordered_map<int,int>mp;

        ListNode* prv = head;
        ListNode* it = head;
        while(it){
            mp[it->val]++;
            it = it->next;
        }

        it = head;
        while(it and mp[it->val]>1){
            it = it->next;
        }
        if(!it)return it;
        prv = it;
        head = it;
        it = it->next;
        while(it){
            while(it and mp[it->val]>1){
                it = it->next;
            }
            if(it){
                prv->next = it;
                prv = it;
                it = it->next;
            }
            
        }
        prv->next = it;
        return head;
    }
};