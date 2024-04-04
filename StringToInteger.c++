/* Write a program to convert string into integer . */
#include<iostream>
#include<vector>
#include<algorithm>
#include<limits.h>
using namespace std;
int main(){
    string s;
    cout<<"Enter your string  :";
    cin>>s;

    int n=0;

    int l=s.size();
    for(int i=0;i<l;i++){
        cout<<int(s[i])<<endl;
        n= (n*10)+(int (s[i]) - 48);
    }


cout<<"After converting your string into integer  : "<<n;
    return 0;
}