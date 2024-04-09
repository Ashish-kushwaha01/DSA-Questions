/* find nCr .*/
#include<iostream>
#include<vector>
#include<algorithm>
#include<limits.h>
using namespace std;
int factorial (int n){
        // if(n==0) return 1;
        long double fact=1;
        for(int i=n;i>=1;i--){
            fact*=i;
        }
        return fact;
    }
int main(){
    
    int n,r;
    cout<<"Enter your n and r : ";
    cin>>n>>r;
        if(r>n){
            cout<<"0";
            return 0;
        }
        
        long  double perm = factorial(n)/factorial(n-r);
        perm = perm/factorial(r);
        
       cout<<perm;

       return 0;
}