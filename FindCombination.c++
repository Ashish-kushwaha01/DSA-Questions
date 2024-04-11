/* find nCr .*/
#include<iostream>
#include<vector>
#include<algorithm>
#include<limits.h>
using namespace std;
long long factorial (int n){
        if(n==0) return 1;
        long long fact=1;
        for(int i=n;i>=1;i--){
            fact*=i;
        }
        return fact;
    }
    long long check(int n,int r){
        int p=n;
        long long fact =1;
        while(p!=(n-r)){
            fact*=p;
            p--;
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
         cout<<factorial(n);

         cout<<"\n";
         cout<<factorial(n-r);

                  cout<<"\n";
         cout<<factorial(r);
                  cout<<"\n";

        
        //     long perm = factorial(n)/factorial(n-r)  ;

        //     cout<<perm<<" \n";
        // perm = perm/factorial(r);
        
        long long perm = check(n,r)/ factorial(r);
       cout<<perm; 
        

       return 0;

}