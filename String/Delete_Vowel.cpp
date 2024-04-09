/*  Program to Remove or Delete Vowels from a String*/
#include<iostream>
#include<string.h>
using namespace std;
int main(){
    string s;
    cout<<"Enter your string : ";
    getline(cin,s);
    int n = s.size();
    for(int i=0;i<n-1;i++){
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'){
            for(int j=i;j<n;j++){
            s[j]=s[j+1];
           
            } 
            n--;
            
        }
    }


    cout<<"After removing all vowels in my string is : "<<s;

    return 0;
}