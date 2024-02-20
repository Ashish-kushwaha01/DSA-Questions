/* Assemble array of character in ascending order .*/
#include<iostream>
using namespace std;
int main(){
    char ch[1000];
    int n;
    cout<<"Enter how many character you have : ";
    cin>>n;
    cout<<"\n";


    cout<<"Enter your characters :  ";
    for(int i=0;i<n;i++)
    {
        cin>>ch[i];
    }
    cout<<"\n";
    
    cout<<" Your characters is :  ";
    for(int i=0;i<n;i++){
        cout<<ch[i];
    }
    cout<<"\n";
    cout<<"\n";

    for(int i=0;i<n;i++){
        char index=ch[i];
        for(int j = i+1;j<n;j++){    /// a s h i s h     a h h i s s 
            if(ch[j]<index){
                index=ch[j];
            }
        }
       char temp= ch[i];
       ch[i]=ch[index];
        ch[index]=temp;
    }

    for(int i=0;i<n;i++){
        cout<<ch[i];
    }

    cout<<"\n";

    for(char ch='a';ch<='z';ch++){
        cout<<ch<<" ";
    }
    return 0;
}