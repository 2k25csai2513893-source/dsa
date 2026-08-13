/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *head1, ListNode *head2) {
        ListNode* temp1=head1;
        ListNode* temp2=head2;
        while(temp1!=temp2){
            if(temp1==nullptr){
                temp1=head2;
            }
            else{
                temp1=temp1->next;
            }
            if (temp2==nullptr){
                temp2=head1;
            }
            else{
                temp2=temp2->next;
            }
        }

        return temp1;
    }
};