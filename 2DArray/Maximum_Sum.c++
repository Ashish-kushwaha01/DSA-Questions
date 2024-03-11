/* Print row index with Max sum .*/
#include<iostream>
#include<vector>
#include<algorithm>
#include<limits.h>
using namespace std;
int main(){
    int arr[4][3]= {1,2,3,4,5,6,7,8,9,10,11,12};
    int maxi=INT_MIN;
    int index=0;

    for(int i=0;i<4;i++) {
        int sum=0;
        for(int j=0;j<3;j++){
            sum+=arr[i][j];
        }
        if(maxi<sum)
        index=i;
        maxi=max(maxi,sum);
        

    }

    cout<<maxi;
    cout<<"\nRow index is : ";
    cout<<index;
}