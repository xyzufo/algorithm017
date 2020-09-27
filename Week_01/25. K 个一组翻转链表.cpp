class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        stack<int> st;
        ListNode* newNode = new ListNode(-1);
        ListNode* prev = newNode;
        ListNode* temp = head;

        while (true) {
            int count = 0;
            while (temp != NULL && count < k) {
                st.push(temp->val);
                temp = temp->next;
                count++;
            }
            if (count != k) break;

            while (!st.empty()) {
                prev->next = new ListNode(st.top());
                st.pop();
                prev = prev->next;
            }
            prev->next = temp;
        }
        return newNode->next;
    }
};