/* Pattern left upper triangle .*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter that how many rows you want to print : ";
    cin>>n;

    for(int i=1;i<=n;i++){
        for(int j=i-1;j>=1;j--)
        cout<<" ";
        for(int j=n;j>=i;j--)
        cout<<"* ";
        cout<<"\n";
    }
}