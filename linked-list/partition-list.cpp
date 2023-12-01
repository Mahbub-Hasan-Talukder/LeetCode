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
    ListNode* partition(ListNode* head, int x) {
        ListNode* it = head;
        ListNode* less;
        ListNode* great;
        ListNode* lessHead;
        ListNode* greatHead;
        bool foundLess = false, foundGreat = false;
        while(it){
            ListNode* nw = new ListNode(it->val);
            if(it->val<x){
                if(!foundLess){
                    less = nw;
                    lessHead = nw;
                    foundLess = true;
                }
                else {
                    less->next = nw;
                    less = nw;
                }
            }
            else{
                if(!foundGreat){
                    great = nw;
                    greatHead = nw;
                    foundGreat = true;
                }
                else {
                    great->next = nw;
                    great = nw;
                }
            }
            it = it->next;
        }
        if(!foundLess or !foundGreat)return head;
        less->next = greatHead;
        return lessHead;
    }
};