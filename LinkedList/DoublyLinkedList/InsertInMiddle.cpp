/* Write a program to insert any element in the middle of the doubly linked list . */
#include<iostream>
#include<vector>
#include<algorithm>
#include<limits.h>
using namespace std;

class Node{
    public:
    int data ;
    Node* next;
    Node* prev;

    Node(int value){
        data = value;
        next =NULL;
        prev =NULL;
    }
};
int main(){

    int arr[] = {3,4,5,6,7};

    Node *Head = NULL;
    Node *point = Head;
     for(int i = 0;i<5;i++){
    if(Head == NULL){
        Head = new Node(arr[i]);
        point = Head;
    }
    else {
   
        Node *temp = new Node(arr[i]);
        point->next = temp;
        temp->prev = point;
        point = temp;

    }
    }
    int k;
    cout<<"Enter in which place do you want to add your element  : ";
    cin>>k;

    Node *curr= Head;
    Node *pre = NULL;
    k--;
    while(k--){
        pre =curr;
        curr =curr->next;
    }

    Node *add = new Node(456);
    add->prev = pre;
    add->next = curr;
    pre->next =add;
    curr->prev = add;


    Node *print=Head;
    while(print){
        cout<<print->data<<"  ";
        print= print->next;
    }
    return 0;
}