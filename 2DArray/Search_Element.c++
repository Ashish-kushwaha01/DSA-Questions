/* Search element in 2D array .*/
#include<iostream>
#include<vector>
#include<algorithm>
#include<limits.h>
using namespace std;

int main(){
    int arr[3][3]= {1,2,3,4,5,6,7,8,9};
    int x;
    cout<<"Enter which no. you want to search : ";
    cin>>x;

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(arr[i][j]==x){
            cout<<"Index of your element is : ";
            cout<<"["<<i<<","<<j<<"]" ;
            return 0;
        }
    }
    }
    cout<<"Sorry! Your element is not found ";

}