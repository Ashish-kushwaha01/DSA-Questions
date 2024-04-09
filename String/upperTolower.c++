/* Program to Convert a Character from Uppercase to Lowercase.*/
#include<iostream>
#include<string.h>
using namespace std;
int main(){
    string s;
    cout<<"Enter your string    : ";
    getline(cin,s);

    int n=s.size();
    for(int i=0;i<n;i++){
        if(s[i]>=65 && s[i]<=90){
            s[i]=s[i]+32;
        }
    }


    cout<<"After converting uppercase into lower case my string will be : "<<s;

    return 0;
}