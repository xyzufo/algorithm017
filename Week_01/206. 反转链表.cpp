//迭代
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode*newNode=NULL;
        ListNode*oldNode=head;
        ListNode*temp;
        
        while(oldNode!=NULL){
            temp=oldNode->next;
            oldNode->next=newNode;
            newNode=oldNode;
            oldNode=temp;
        }
        return newNode;
    }
};




//递归
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if(head==NULL||head->next==NULL) return head;
        ListNode*newNode=reverseList(head->next);
        head->next->next=head;
        head->next=NULL;
        return newNode;
    }
};




//栈
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        stack<int> st;
        while (head != NULL) {
            st.push(head->val);
            head = head->next;
        }
        ListNode* newNode = new ListNode(-1);
        ListNode* prev = newNode;
        while (!st.empty()) {
            prev->next = new ListNode(st.top());
            st.pop();
            prev = prev->next;
        }
        return newNode->next;
    }
};