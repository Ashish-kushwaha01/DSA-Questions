/* Sum of N natural no. */
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter that how many no. do you have ? : ";
    cin>>n;

    int sum = 0;
    for(int i=1;i<=n;i++){
        sum+=i;
    }

    cout<<"\nSum of my "<<n<<" natural no. is : "<<sum ;
}