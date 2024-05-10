/* Create binary tree by second mathod .*/
#include<iostream>
#include<vector>
#include<algorithm>
#include<limits.h>
using namespace std;
class Node{
    public:
    int data;
    Node *left , *right ;
    Node(int value){
        data = value;
        left = right = NULL;
    }
};

// pre order traversal 
void PreOrder(Node *root){
    if(root == NULL) return ;
    
    cout<<root->data<<" "; // print data
    PreOrder(root->left); // go to left side 
    PreOrder(root->right);  // go to right side 
}


// In Order traversal 

void InOrder(Node* root){
    if(root == NULL)  return ;
    InOrder(root->left);
    cout<<root->data<<" ";
    InOrder(root->right);
}


// Post Order traversal 

void PostOrder(Node* root ){
    if(root == NULL) return ;
    PostOrder(root->left);
    PostOrder(root->right);
    cout<<root->data<<" ";
}

// create a function for binary tree.

 Node* CreateBinary(){
    int n;
    
    cin>>n;

    if(n==-1) return NULL;
    Node *temp = new Node(n);

    cout<<"Enter the left child of "<<n <<"  :  ";
    temp->left = CreateBinary();
    cout<<"Enter the right child of "<<n << "  :   ";

    temp->right = CreateBinary();
    return temp;
 }
int main(){

    Node* root ;
    cout<<"Enter your root element : ";
    root = CreateBinary();

    cout<<"\n";
    cout<<"PreOrder traversal is : ";
    PreOrder(root);
    cout<<"\n";
    cout<<"InOrder traversal is : ";
    InOrder(root);
    cout<<"\n";
    cout<<"PostOrder traversal : ";
    PostOrder(root);

    
}