/* Convert Decimal no. into Binary no. */
#include<iostream>
using namespace std;

   int Dec(int a){
    int x=1;
    int sum=0;
    int  product=1;
    while (a != 0) {
    int remainder= remainder % 2;
    sum= sum + (remainder *product);
    a = a / 2;
    product *= 10;
  }
    return sum;
   }
    int main(){
    int n;
    cout<<"Enter your no. : ";
    cin>> n;
    cout<<Dec(n);
}