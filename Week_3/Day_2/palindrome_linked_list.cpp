class Solution {
private:
    ListNode* getMid(ListNode* head){
        ListNode* slow=head;
        ListNode* fast=head->next;
        while(slow!=NULL && fast!=NULL){
            fast=fast->next;
            if(fast!=NULL){
                fast=fast->next;
            }
            slow=slow->next;
        }
        return slow;
    }
    ListNode* reverse(ListNode* head){
        if(head==NULL || head->next==NULL) return head;
        ListNode* curr=head;
        ListNode* prev=NULL;
        ListNode* forward=NULL;
        while(curr!=NULL){
            forward=curr->next;
            curr->next=prev;
            prev=curr;
            curr=forward;
        }
        return prev;
    }
public:
    bool isPalindrome(ListNode* head) {
        if(head==NULL || head->next==NULL){
            return true;
        }
        ListNode* mid=getMid(head);
        ListNode* head2=reverse(mid);
        while(head2!=NULL){
            if(head->val!=head2->val) return false;
            head=head->next;
            head2=head2->next;
        }
        return true;
    }
};
