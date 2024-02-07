/* Change Binary no. into Decimal no. */
#include<iostream>
using namespace std;
int Bin(int a){
    int x=1;
    int sum=0;
    while(a>0){
        int y=a%10;
        sum+=x*y;
        x*=2;
        a/=10;
    }
    return sum;
}
int main(){
    int n;
    cout << "Enter your no. : ";
    cin>> n;
    cout<<Bin(n);
}