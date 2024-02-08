/* Using of Function .*/
#include<iostream>
using namespace std;
void Prime(int a){
    if(a<2){
       cout<<"Your no. is not Prime .";
    }
    else if(a==2){
        cout<<"Your no. is the smallest Prime no. ";
    }
    else{
        for(int i=2;i<a;i++){
            if(a%i==0){
               cout<<"Your no. is not Prime no. ";
               return ;
            }
            else {
                cout<<"Your no. is Prime no.  "  ;
                return ;   
                       }

        }
    }
    
}

   int Fact(int b){
        int fact=1;
        if(b==0){
            fact=1;
            return 0;
        }
        else if(b<0){
            cout<<"Factorial can not be calculated ";
           return 0 ;
        }
        else{
            for(int i=b;i>=1;i--){
                fact*=i;
            }
        }
        return fact;
    }
int main(){
    int n;
    cout<<"Enter your no. : ";
    cin>>n;
    Prime(n);

    cout<<"\n\nFactorial of your no. is : ";
    cout<<Fact(n);
}