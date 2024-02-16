#include<iostream>
using namespace std;
int main(){

int rev=0;

      int x;
    cin>>x;
       
       int n=x;
        int y=0;
        while(x!=0){
             int digit = x%10;
            rev=(rev*10)+digit;
            x=x/10; 
            y++;
        }
       cout<<rev;
}