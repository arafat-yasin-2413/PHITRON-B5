#include <bits/stdc++.h>
using namespace std;

class ListNode
{
public:
    int val;
    ListNode *next;

    ListNode(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

int main()
{
    

    return 0;
}

class Solution {
public:
    int size(ListNode *head)
    {
        ListNode *temp = head;
        int cnt=0;
        while(temp!=NULL)
        {
            cnt++;
            temp = temp->next;
        }
        return cnt;
    }
    ListNode* middleNode(ListNode* head) {
        int sz = size(head);
        ListNode *temp = head;
        for(int i=1; i<=sz/2; i++)
        {
            temp = temp->next;
        }
        return temp;
    }
};