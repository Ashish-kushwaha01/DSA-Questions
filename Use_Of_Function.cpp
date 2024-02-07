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

int main(){
    int n;
    cout<<"Enter your no. : ";
    cin>>n;
    Prime(n);
}