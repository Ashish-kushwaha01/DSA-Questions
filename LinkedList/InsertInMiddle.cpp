/* Insert element in the middle of the linked list .*/
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
        next= NULL;
    }
};
int main(){
    Node *Head = NULL;
    Node *tail = NULL;

    int arr[] = {2,3,4,5,6,7,8,9,89};

    for(int i=0;i<9;i++){
        if(Head == NULL){
        Head  = new Node(arr[i]);
        tail  = Head;
    } 
    else {
        while(tail->next!=NULL){
            tail = tail->next;
        }
        Node *temp;
        temp = new Node(arr[i]);
        tail->next = temp;
        tail = temp;
        
       
    }
}
Node *add  = Head;
int k,p;
cout<<"Enter in which place do you want to add your element : ";
cin>>k;

cout<<"Enter your element : ";
cin>>p;
k--;
while(k--){
    add = add->next;
}

// add my element ;

Node *print;
print = new Node(p);
print->next = add->next;
add->next = print;

Node *temp =Head;
while(temp !=NULL)
{
    cout<<temp->data <<" ";
    temp = temp->next;
}
}