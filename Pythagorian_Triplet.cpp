/* Give 3 numbers and find that they are pythagorian triplet or not . */
#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter your first second and third no. : ";
    cin>>a>>b>>c;

    if(a*a==b*b+c*c || b*b==a*a+c*c || c*c==a*a+b*b)
    cout<<"Your numbers are Pythagorian triplets .";
    else
    cout<<"Your numbers are not Pythagorian triplets .";
}