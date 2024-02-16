/* find maximum no. in your array using INT_MIN*/
#include<iostream>
#include<limits.h>
using namespace std;
int main(){
    int arr[10]={3,3,5,3,4,5,3,4,2,6};
    int max= INT_MIN;
    for(int i=0;i<10;i++){
        if(arr[i]>max)
        max=arr[i];
    }
    cout <<"Maximum element of my array is : ";
    cout<<max;
}