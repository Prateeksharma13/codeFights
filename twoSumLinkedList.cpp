/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
#include <math.h>
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int a = 0, b = 0;
        int count_a = 0, count_b = 0;
        int sum = 0;
        int carry = 0;
        ListNode preHead(0), *p = &preHead;
        while(l1 || l2) {
            if(l1) {
                a = (l1->val);
            }
            if(l2) {
                b = (l2->val);
            }
            sum = carry+a+b;
            p->next = new ListNode((sum)%10);
            p = p->next;
            if(sum >= 10) {
                carry = 1;
            } else {
                carry = 0;
            }
    
            sum = 0;
            a = 0; b =0;
            count_a++;
            if(l1) {
                l1 = l1->next;                
            }
            if(l2) {
                l2 = l2->next;                
            }
        }
        if(carry == 1){
            p->next = new ListNode(carry);
        }
        return preHead.next;
    }
};
