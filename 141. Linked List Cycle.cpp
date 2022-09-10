        ListNode *slow=head;
        ListNode *fast=head;
        
        
        for (ListNode *curr=head;fast!=NULL&& fast->next!=NULL; curr=curr->next)
        {
            slow =slow->next;
            fast=fast->next->next;
            
            if (slow==fast)
            return true;

        }
        return false;
