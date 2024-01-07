class Solution{
public:
    int getNthFromLast(Node *head, int n)
    {
        Node *slow = head;
        Node *fast = head;

        for (int i = 0; i < n; ++i) {
            if (fast == NULL)
                return -1; 
            fast = fast->next;
        }

        while (fast != NULL) {
            slow = slow->next;
            fast = fast->next;
        }

        return (slow != NULL) ? slow->data : -1; 
    }
};
