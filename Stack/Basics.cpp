/* Basics of stack */
#include<iostream>
#include<vector>
#include<algorithm>
#include<limits.h>
using namespace std;

// creating a stack by using an array 

class Stack{
    int *arr;
    int top;
    int size;
    public:
    Stack(int s){
        size = s;
        top = -1;
        arr = new int(s);
    }

    //  push 
    void push(int n){
        if(top == size-1){
            cout<<"Your stack is overflow ";
            return ;
        }

    top++;
        arr[top]= n;
        cout<<"Pushed "<<n << "in the stack \n";
    }

    // pop 
    void pop(){
        if(top ==-1){
            cout<<"Your stack is Empty now ";
            return ;
        }
        cout<<"Popped "<<arr[top]<< "from the stack \n";
        top--;
    }

    // peek 
    int peek (){
        if(top == -1) return -1;
        return arr[top];
    }

    // isEmpty 
    bool isEmpty (){
        return top==-1;
    }

    // isSize

    int isSize(){
        return top+1;
    }
};

int main(){
    Stack s(5);
    s.push(3);
    s.pop();
    // s.push(3);
    // s.push(2);
    // s.push(1);
    cout<<s.isSize()<<"\n";
    cout<<s.isEmpty();

}