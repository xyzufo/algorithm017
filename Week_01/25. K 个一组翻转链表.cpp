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
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode*newNode=new ListNode(-1);
        ListNode*prev=newNode;
        stack<int> st;

        while(true){
            int count=0;
            ListNode*temp=head;
            while(temp!=NULL&&count<k){
                st.push(temp->val);
                temp=temp->next;
                count++;
            }
            if(count!=k) break;
            while(!st.empty()){
                prev->next=new ListNode(st.top());
                st.pop();
                prev=prev->next;
            }
            prev->next=temp;
            head=temp;
        }
        return newNode->next;
    }
};