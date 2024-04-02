/* Write a program to insert any element in the begining of the doubly linked list . */
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
     for(int i = 0;i<5;i++){
    if(Head == NULL){
        Head = new Node(arr[i]);
    }
    else {
   
        Node *temp = new Node(arr[i]);
        temp->next = Head;
        Head->prev = temp;
        Head = temp;

    }
    }

    Node *print=Head;
    while(print){
        cout<<print->data<<"  ";
        print= print->next;
    }
    return 0;
}