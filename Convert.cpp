/* Convert lower case into upper case */
#include <iostream>
using namespace std;
int main(){
    char ch ;
    cout<<"Enter your lower case character : ";
    cin>>ch;

    cout<<"Upper case of your character is : ";
    char p = ch-32;
    cout<<p;

    return 0;
}