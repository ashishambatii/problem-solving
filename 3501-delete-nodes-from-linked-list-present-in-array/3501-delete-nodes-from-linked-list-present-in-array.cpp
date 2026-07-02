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
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        set<int>s;
        for(int i=0;i<nums.size();i++){
            s.insert(nums[i]);
        }
        ListNode* dummy = new ListNode(0);
        ListNode* tail = dummy;

        ListNode* temp = head;

        while (temp != NULL) {

    if (s.find(temp->val) == s.end()) {
        tail->next = new ListNode(temp->val);
        tail = tail->next;
    }

    temp = temp->next;
     }

   return dummy->next;

    }
};