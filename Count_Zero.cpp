/* Count how many zero in the last of my factorial ?*/
#include<iostream>
using namespace std;
int factorial (int n)
{
    int fact=1;
    while(n!=0){
        fact*=n;
        n--;
    }
    return fact ;
}
int main (){
    int n;
    cout<<"Enter your no. : ";
    cin>>n;
        int p=factorial(n);
        int count=0;
        cout<<p<<"\n";
    while(p!=0){
        int digit=p%10;
        if(digit ==0)
        count++;
        else 
        break;
    p/=10;

    }

    cout<<"Total zero in your factorial is : "<<count;
    
    

    return 0;
}