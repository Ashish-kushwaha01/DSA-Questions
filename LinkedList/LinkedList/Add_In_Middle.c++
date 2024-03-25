/* Insert an element in the middle of the linked list  . */
#include<iostream>
#include<vector>
#include<algorithm>
#include<limits.h>
using namespace std;
class Node{
    public:
    int data;
    Node *next;

    Node(int value){
        data = value;
        next = NULL;
    }
};

int main(){
    int arr[]= {3,4,5,6,7,8};
    Node *Head = NULL;
    Node *tail = NULL;
    for(int i=0;i<6;i++){
    if(Head == NULL){
        Head = new Node(arr[i]);
        tail = Head;
    }
    else {
        while(tail->next!=NULL){
            tail = tail->next;
        }
        Node *temp;
       tail->next = new Node(arr[i]);
         
    }
    }
    // Enter which place do you want to add element . 

    int x;
    cout<<"Enter which place do you want to add element in your linked list : ";
    cin>>x;
    int n;
    cout<<"Enter which no. do you want to add ? : ";
    cin>>n;
    Node *temp= Head;
    while(x>1){
        temp= temp->next;
        x--;
    }

    // Create new Node .

    Node *temp2 ;
    temp2= new Node(n);
    temp2->next = temp->next;
    temp->next = temp2;

    temp = Head;
    while(temp!=NULL){
        cout<<temp->data<< " ";
        temp = temp->next;
    }
}