/* Print all prime no. between given intervals .*/
#include<iostream>
using namespace std;
void Prime(int a,int b){
    int flag=0;
    for(int i=a;i<=b;i++){
        for(int j=2;j<i;j++){
            if(i%j!=0)
           flag=1;
        }
        if(flag==1)
        cout<<i<<" ";
    }
    // for(int i=a;i<=b;i++){
    //     if(flag==1){
    //         cout<<i;
    //     }
    }
    
//     return ;
// }
int main(){
    int a,b;
    cout<<"Enter your two intervals : ";
    cin>>a>>b;
    cout<<"Your Prime no. are : ";
    Prime(a,b);
}