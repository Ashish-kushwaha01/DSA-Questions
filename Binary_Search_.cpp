/* Binary Searvh */
#include<iostream>
using namespace std;
int BinarySearch(int arr[],int n, int key){
    int start=0;
            int end=n-1;
            int mid;
     while(start<=end)
            {
                mid=start+ (end-start)/2;

                if(arr[mid]==key)
                return mid;
                else if(arr[mid]<key)
                start=mid+1;
                else
                end=mid-1;
            }
            return -1;
}
int main(){
    int n;
    cout<<"Enter how many you have : ";
    cin>>n;
    int arr[1000];
    for(int i=0;i<n;i++){
        cout<<"Enter no. "<<i+1<<" : ";    // For more convience Please enter no. in increasing order;
        cin>>arr[i];
            }

            
int k;
            cout<<"Enter which no. do you want to search ? : ";
            cin>>k;

    cout<<"Index of your given no. is : " <<BinarySearch(arr,n,k);

    return 0;
           
}