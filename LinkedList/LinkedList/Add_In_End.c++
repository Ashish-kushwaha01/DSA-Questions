/* Insert element in the end . */
#include <iostream>
#include <vector>
#include <algorithm>
#include <limits.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;

    Node(int value)
    {
        data = value;
        next = NULL;
    }
};
int main()
{
    Node *Head;
    Head = NULL;
    //  Node *tail;
    // Head = new Node(45);
    // cout<< Head->data<<" ";

    // Node *temp;
    // temp = new Node(7);
    // temp->next = Head;

    // Node *print= NULL;
    // while(print<=Head){
    //     cout<<print->data<<" ";
    // }

    int arr[] = {7, 6, 5, 4, 3, 2};
    // Node *Head;
    for (int i = 0; i < 6; i++)
    {
        // tail = Head;
        if (Head == NULL)
        {
            Head = new Node(arr[i]);
        }

        else
        {
           Node *tail;
           tail = Head;
            while (tail->next!= NULL)
            {
                tail = tail->next;
            }
            // Node *temp;
            // temp = new Node(arr[i]);
            // tail->next = temp;  
            // tail = temp;   
            
                 //7 6 5 4 3 2 45 

                //  Node temp;
                 tail->next = new Node(arr[i]);
           
        }
    } 

    Node *add;
    add = new Node(45);
    tail->next = add;
    tail=add;

    
    Node *temp = Head;
    while (temp !=NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }

    //  Element add in the end ;

    // Node *tail = NULL;
    // while(tail!=Head){
    //     cout<<tail->data ;

    // }
}