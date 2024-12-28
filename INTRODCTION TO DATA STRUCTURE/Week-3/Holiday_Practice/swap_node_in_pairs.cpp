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
class Solution
{
public:
    ListNode *swapPairs(ListNode *head)
    {

        if (head == NULL || head->next == NULL)
        {

            return head;
        }

        ListNode *newhead = head->next;
        ListNode *prev = NULL;
        ListNode *temp1 = head;
        ListNode *temp2 = head->next;

        while (temp2 != NULL && temp1 != NULL)
        {
            // swapping part
            temp1->next = temp2->next;
            temp2->next = temp1;
            // ager swap node track rakhar jonno
            if (prev != NULL)
            {

                prev->next = temp2;
            }

            prev = temp1;        // swap kora node jate haray na jay
            temp1 = temp1->next; // temp ke agaite thakbo
            temp2 = (temp1 != NULL) ? temp1->next
                                    : NULL; // temp2 ke dekheshune agabo karon
                                            // last node null o hote pare
        }

        return newhead;
    }
};
