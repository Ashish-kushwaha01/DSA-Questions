/* Program to Convert lowercase Character to uppercase.*/
#include<iostream>
#include<string.h>
using namespace std;
int main(){
    string s;
    cout<<"Enter your string    : ";
    getline(cin,s);

    int n=s.size();
    for(int i=0;i<n;i++){
        if(s[i]>=97 && s[i]<=122){
            s[i]=s[i]-32;
        }
    }


    cout<<"After converting lowercase into uppercase my string will be : "<<s;

    return 0;
}