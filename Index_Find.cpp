/* Find First and Last Position of Element in Sorted Array Using linear sort. */
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter your no. : ";
    cin>>n;
    int arr[1000];

    for(int i=0;i<n;i++){
        cout<<"Enter no. "<<i+1<< " : " ;
        cin>>arr[i];
    }

    cout<<"My no. is : ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\n";

    int k;
    cout<<"Enter your target : ";
    cin>>k;
int first=-1;
int last=-1;
    int count =0;
    for(int i=0;i<n;i++){
        if(arr[i]==k)
        {
            first=i;
            count++;
           break;
        } 
        
        }

        if(count==1){
            for(int i=n-1;i>first;i--){
                if(arr[i]==k){
                    last=i;
 break;
                }
               
            }
        }

        cout<<"First and last position is : "<<first<<" and "<<last;

        return 0;

    }
