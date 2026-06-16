class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int len=0;
        ListNode* temp=head;
        while(temp!=NULL){
            len++;
            temp=temp->next;
        }
        if(n==len){
            head=head->next;
            return head;
        }
        ListNode* prev=head;
        for(int i=1;i<len-n;i++){
            prev=prev->next;
        }
        ListNode* tillN=prev->next;
        //removal
        prev->next=tillN->next;
        tillN->next=NULL;
        delete tillN;
        return head;
    }
};
