 // Print array element in the linked list .
#include<iostream>
using namespace std;

class Node {
public:
int data;
Node *next;

Node(int value){
data = value;
next = NULL;
}
};

int main()
{
Node *Head;
Head = NULL;
Head = new Node(45);

Node *temp ;
temp = new Node (78);
temp->next = Head;
Head = temp;

// Print element .
Node *print = Head;
while(print !=NULL){
cout<<print->data<<" ";
print = print->next;
}
}

