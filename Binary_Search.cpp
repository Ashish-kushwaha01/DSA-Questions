/* Binary search in sorted array .*/

#include<iostream >
using namespace std ;
int main(){
    int n;
    cout<<"Enter that how many no. do you have ? : ";
    cin>>n;

    int arr[n];
    cout<<"Enter your numbers  : ";
    for(int i=0;i<n;i++){
        cout<<"Enter no. "<<i+1<< " is : ";
        cin>>arr[i];
    }
    cout<<"Your no. is : ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<< " ";
    }

    cout<<"\n";

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                int temp=arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }

           
        }
    }

     cout<<"After sorting my elements are : ";
            for(int i=0;i<n;i++){
                cout<<arr[i]<<" ";
            }

            cout<<"\n";

// NOW ARRAY IS SORTED , WE CAN APPLY BINARY SEARCH .
int val;
cout<<"Enter which value do you want to search ? : ";
cin>>val;


int start=0;
int end =n;
int mid;
for(int i=start ; i<end ;i++){
    mid=(start+end)/2;
    if(arr[mid]==val)
    {
        cout<<"Index is : "  << mid;
    break;
    }
    else if(val>arr[mid ]){
        start=mid+1;
    }
    else{
        end=mid-1;
    }
}

}