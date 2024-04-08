/*  Program to Remove or Delete Vowels from a String*/
#include<iostream>
#include<string.h>
using namespace std;
int main(){
    string s;
    cout<<"Enter your string : ";
    cin>>s;
string str = "";
    int n = s.size();
    for(int i=0;i<n;i++){
        if(s[i]!='a'||s[i]!='e'||s[i]!='i'||s[i]!='o'||s[i]!='u'){
            str+=s[i];
            i--;
        }
    }


    cout<<"After removing all vowels in my string is : "<<str;

    return 0;
}