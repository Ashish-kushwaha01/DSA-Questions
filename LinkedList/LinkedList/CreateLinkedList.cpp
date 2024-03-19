/* Creating a linked list . */
#include<iostream>
#include<vector>
#include<algorithm>
#include<limits.h>
using namespace std;

// creating class 

class Node{
    public:
    int data;
    Node *next;

    // create constructor 

    Node(int value){
        data=value;
        next=NULL;
    }
};
int main(){

// Create  a Node ;

Node *Head;
Head = new Node(4);

// Inserting new node/element  at the begining .

// list does not exist 

if(Head==NULL)
Head = new Node(34);

// list exist

else{
    Node *temp ;
    temp = new Node(45);
    temp->next = Head;
    Head = temp;

    Node *Again;
    Again= new Node(54);
    Again->next = Head;
    Head= Again;

}

//Print element . 

Node *temp = Head;
while(temp != NULL){
    cout<<temp->data<<" ";
    temp=temp->next;
}



}