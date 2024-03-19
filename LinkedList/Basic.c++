/* Linked list first program . */
#include<iostream>
#include<vector>
#include<algorithm>
#include<limits.h>
using namespace std;

  //Singly Linked List . 

class Node{
    public:
    int data ;
    int *next;

    Node(int data){
        this->data = data;
        next = NULL;
    }
};

int main(){
    // given value by normal method .

    // Node a(4);
    
    // cout<<Node.a<<" "; 

    // Dynamic Method .

    Node *Head;
    Head = new Node (5);

    cout<<Head->data<<"\n ";
    cout<<Head->next;

    Head->next = &Head->data;
    cout<<Head->next<< " \n";

    int arr[5];
    for(int i=0;i<5;i++){
        cout<<"Enter no. "<<i+1<<" : ";
        cin>>arr[i];
    }
int i=5;
    while(i!=0){
        Head->data=arr[i];
        cout<<Head->data<<" ";
        i--;
    }
    
}



