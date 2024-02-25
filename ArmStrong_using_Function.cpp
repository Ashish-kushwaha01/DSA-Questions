/* Check a no. is Armstrong no. or not by using function .*/
#include<iostream>
using namespace std;
void Arm(int n)
{
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

}
int main(){
    int n;
    cout<<"Enter your no. : ";
    cin>>n;

    Arm(n);

}