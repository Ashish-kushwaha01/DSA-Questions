/* Add two matrix.*/
#include<iostream>
// #include<vector>
// #include<algorithm>
// #include<limits.h>
using namespace std;
int main(){
    int r,c;
    cout<<"Enter that how many row and column you have ? : ";
    cin>>r>>c;
cout <<"Enter element of first matrix : ";

    int arr[r][c],brr[r][c];
    for(int i= 0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>arr[i][j];
        }
    }

    cout <<"Enter element of second matrix : ";

    for(int i = 0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>brr[i][j];
        }
    }
    cout<<"\n\n";
    cout<<"My first matrix is : ";
     for(int i= 0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }

     cout<<"\n\n";
    cout<<"My second matrix is : ";
     for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<brr[i][j]<<" ";
        }
        cout<<"\n";
    }
     cout<<"\n\n";

    int sum[r][c];
     cout<<"\n\n";
    cout<<"Sum of my matrices is : ";
     for(int i =0;i<r;i++){
        for(int j=0;j<c;j++){
            sum[i][j]= arr[i][j]+brr[i][j];
            cout<<sum[i][j]<<" ";
        }
        cout<<"\n";
    }

}