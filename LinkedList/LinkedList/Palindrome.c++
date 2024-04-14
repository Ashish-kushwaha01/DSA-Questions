 /* Write a program to check that my list is palindrome or not . */
 #include<iostream>
 #include<vector>
 #include<algorithm>
 #include<limits.h>
 using namespace std;
 class Node{
    public:
    int data ;
    Node *next;
    Node (int value){
        data = value;
        next =NULL;
    }
 };
 //function to create linked list from array .
    Node *CreateLinkedList(int arr[],int index,int size){
        if(index==size) 
        return NULL;

        Node *temp = new Node(arr[index]);
        temp->next = CreateLinkedList(arr,index+1,size);
return temp;

    }

    // Function to reverse a linked list ;

    Node* reverse(Node* head){
        Node* curr= head;
        Node *prev = NULL;
        Node *fut =head->next;

        while( curr){
            curr->next = prev;
            prev= curr;
            curr = fut;
            if(curr) fut = curr->next;
        }
head = prev;
return head;
    }

 int main(){
    int n;
    cout<<"Enter that how many no. in your array : ";
    cin>>n;

    int arr[1000];

    for(int i=0;i<n;i++){
        cout<<"Enter no.["<<i+1<<"] : ";
        cin>>arr[i];
    }

    Node *head = CreateLinkedList(arr,0,n);

    Node* tail = head;
    cout<<"Your linked list element are : ";
    while(tail){
        cout<<tail->data<<" ";
        tail = tail->next;
    }
 int count = n/2;
 int i=1;
 Node* curr =head;
 while(i<=count){
    curr=curr->next;
    i++;
 }

 tail = reverse(curr);

curr = head;
 
 i=0;
 bool flag = true;
 while(i<=count){
    if(curr->data != tail->data){
       flag = false;
       break;
    }
    curr=curr->next;
    tail = tail->next;    
    i++;

 }
 cout<<"\n\n";

 if(flag == true)
 cout<<"Your list is palindrome ";
 else cout<<"Your list is not Palindrome ";

 return 0;

 }