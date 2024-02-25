/* Check that your no. is armstrong no. is not ? */
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter your no. : ";
    cin>>n;
    int x=n;
    int sum =0;
    while(n!=0){
        int digit=n%10;
        sum+=(digit *digit*digit);
        n/=10;
    }
    if(sum==x)
    cout<<"Your no. is Armstrong no. ";
    else 
    cout<<"Your no. is not Armstrong no. ";

    return 0;
}