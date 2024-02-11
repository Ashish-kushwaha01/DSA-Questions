/* Check that given no. is Prime or not using function .*/
#include<iostream>
using namespace std;
int Prime(int b){
    bool flag = false;

  for(int i = 2; i <= b/2; i++)
  {
      if(b%i == 0)
      {
          flag = true;
          break;
      }
  }
  return flag;
}
int main(){
    int a;
    cout<<"Enter your no. : ";
    cin>>a;
    if(Prime(a)==0)
    cout<<"Your no. is a Prime no.";
    else
    cout<<"Your no. is not a Prime no.";
    return 0;
}