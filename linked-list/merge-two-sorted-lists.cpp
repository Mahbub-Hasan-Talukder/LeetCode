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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* list3;
        ListNode* head;

        if(list1==NULL)return list2;
        if(list2==NULL)return list1;
        
        if(list1->val>=list2->val){
            head = list2;
            list2= list2->next;
        }
        else {
            head = list1;
            list1 = list1->next;
        }
        list3 = head;
        head->next = NULL;
        while(list1!=NULL and list2!=NULL){
            if(list1->val>=list2->val){
                head->next = list2; list2 = list2->next;
            }
            else{
                 head->next = list1; list1 = list1->next;
            }
            head = head->next;
            head->next = NULL;
        }
        
        if(list1!=NULL)head->next = list1;
        if(list2!=NULL)head->next = list2;

        return list3;
    }
};