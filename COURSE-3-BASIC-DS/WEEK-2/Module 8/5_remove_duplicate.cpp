#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

void take_input(Node *&head, Node *&tail, int v)
{
    // notun node banabo
    Node *newNode = new Node(v);
    // head null a kina
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    // populated list hoile
    tail->next = newNode;
    tail = newNode;
}

void print_linked_list(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

int size_of_linked_list(Node *head)
{
    Node *temp = head;
    int cnt = 0;
    while (temp != NULL)
    {
        temp = temp->next;
        cnt++;
    }
    return cnt;
}
// 1
// void remove_duplicate_node(Node *head)
// {
//     for (Node *i = head; i != NULL; i = i->next)
//     {
//         cout << "outer loop i er val : " << i->val << endl;
//         for (Node *j = i; j->next != NULL;)
//         {
//             cout << "j shuru = inner loop j er val :  " << j->val << endl;
//             if (i->val == j->next->val)
//             {
//                 cout << "inner if : i er val = " << i->val << " j er next er val = " << j->next->val << endl;
//                 Node *delNode = j->next;
//                 j->next = delNode->next;
//                 delete delNode;
//             }
//             else
//             {
//                 cout << "inner else : " << "j er val samne neuar agee : " << j->val << endl;
//                 j = j->next;
//                 cout << "inner else : " << "j er val samne neuar pore : " << j->val << endl;
//             }
//             cout << "j sesh = inner loop j er val :  " << j->val << endl;
//         }
//         cout << endl;
//     }
// }


/*
ধাপ ১ঃ
    প্রথমে i কে হেডে রাখবো।
ধাপ ২ঃ 
    একটা ইনফিনিটি while লুপ চালাবো 
        ধাপ ৩ঃ
            কন্ডিশন চেক i যদি নালে থাকে তাহলে বাইরের লুপ টা ব্রেক
        ধাপ ৪ঃ 
            আরেকটা নোড ভ্যারিয়েবল নিবো, যাকে শুরুতে i তে পয়েন্ট করবো 
        ধাপ ৫ঃ
            এখন আরেকটা ইনফিনিটি while লুপ চালাবো যার মধ্যে 
            ধাপ ৬ঃ
                start এর নেক্সটে যদি নাল থাকে তাহলে ব্রেক 
            ধাপ ৭ঃ 
                i এর ভ্যালুর সাথে start এর নেক্সটের ভ্যালু মিল্লে ডিলিট, কানেকশন 
            ধাপ ৮ঃ
                ভিতরের আইটারেটর নোড ভ্যারিয়েবল টা নালে না থাকলে, 
                ধাপ ৯ঃ
                    i এর ভ্যালুর সাথে ভ্যালু না মিল্লে start কে সামনে নিবো
        ধাপ ১০ঃ
            এখন বাইরের লুপের জন্য i নোড ভ্যারিয়েবল টাকে সামনে নিবো। 

*/
void remove_duplicate_node(Node *head)
{
    Node *i = head;
    while(true)
    {
        if(i == NULL)
        {
            break;
        }
        Node *start =i;
        while(true)
        {
            if(start->next == NULL)
            {
                break;
            }

            if(i->val == start->next->val)
            {
                // delete
                Node *delNode = start->next;
                // connect
                start->next = start->next->next;
                delete delNode;
                
            }
            
            if(start->next != NULL)
            {
                if(i->val != start->next->val)
                {
                    start = start->next;
                }
            }
        }
        i = i->next;
    }
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    while (true)
    {
        int val;
        cin >> val;
        if (val == -1)
        {
            break;
        }
        take_input(head, tail, val);
    }

    remove_duplicate_node(head);
    print_linked_list(head);

    return 0;
}