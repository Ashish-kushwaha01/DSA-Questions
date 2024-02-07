/* Enter 3 numbers and find that it is pythagorian triplet or not using function .*/
#include <iostream>
using namespace std;
bool check(int x, int y, int z)
{
  int a=max(x,max(y,z));
  int b,c;
  if(a==x){
    b=y;
    c=z;
  }
  else if(a==y){
    b=x;
    c=z;
  }
  else{
    b=y;
    c=x;
  }
  if(a*a==b*b+c*c){
    return true;
  }
  else{
    return false;
  }
}
int main()
{
    int x, y, z;
    cout << "Enter your first , second and third no. : ";
    cin >> x >> y >> z;
    if (check(x, y, z))
    {
        cout << "Your numbers are Pythagorian triplet .";
    }
    else
    {
        cout << "Your numbers are not Pythagorian triplet .";
    }
}