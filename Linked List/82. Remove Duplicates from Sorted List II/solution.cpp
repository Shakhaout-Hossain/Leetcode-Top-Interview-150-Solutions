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
            ListNode *cur=head;
            ListNode *ans = new ListNode(-1703);
            ListNode *dummy = ans;
            while(cur!=nullptr){
                if(cur->next!=nullptr&&cur->val==cur->next->val){
                    ///cout << "Hello"<< endl;
                    while(cur->next!=nullptr&&cur->val==cur->next->val)cur=cur->next;
                    cur=cur->next;
                    continue;
                }
                //cout << cur->val << endl;
                    else{dummy->next=new ListNode(cur->val);
                    dummy=dummy->next;
                         cur=cur->next;
                        }
                
            }
            return ans->next;
        }
    };