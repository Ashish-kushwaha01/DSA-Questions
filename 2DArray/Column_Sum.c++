/* Print sum of each column in 2D array .*/
#include<iostream>
#include<vector>
#include<algorithm>
#include<limits.h>
using namespace std;
int main(){
    int arr[4][3]= {1,2,3,4,5,6,7,8,9,10,11,12};
    for(int j=0;j<3;j++){
        int sum=0;
        for(int i=0;i<4;i++){
            sum+=arr[i][j];
           
        }
         cout<<"Sum of column"<<j+1<<" : "<<sum;
         cout<<" \n";
    }

    return 0;
}