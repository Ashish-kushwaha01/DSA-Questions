/* Triplet sum is equal to  0 */
#include<iostream>
using namespace std;
int main(){
    int arr[6]={-1,0,1,-1,-1,2};
    for(int i=0;i<6;i++){
        for(int j=i+1;j<6;j++){
            for(int k=j+1;k<6;k++){
                if(arr[i]+arr[j]+arr[k]==0){
                    cout<<"["<<arr[i]<<" "<<arr[j]<<" "<<arr[k]<<"]"<<" ";
                }
            }
        }
    }

    return 0;

}