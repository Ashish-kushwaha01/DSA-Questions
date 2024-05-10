// Quick sort;
#include<iostream>
#include<stdio.h>
using namespace std;

int position(int arr[],int start,int end) {
    int pos = start;
    for(int i=start;i<=end;i++){
        if(arr[i]<=arr[end]){
            swap(arr[i],arr[pos]);
            pos++;
        }
    }

    return pos-1;
}

void quickSort(int arr[],int start,int end){
    if(start>=end) return ;

    int pivot = position(arr,start,end);

    // For left part 

       quickSort(arr,start,pivot-1);


    // For right part 

     quickSort(arr,pivot+1,end);


return ;
}
int main(){
    cout<<"Enter that how many no. you have : ";
    int n;
    cin>>n;
    int arr[4000];

    

    for(int i=0;i<n;i++){
        cout<<"Enter your element "<<i+1<<" : ";
        cin>>arr[i];
    }


        cout<<"Before sorting your element are : ";
        for(int i=0;i<n;i++) cout<<arr[i]<<" ";

    quickSort(arr,0,8);

    cout<<"\n\n";
    cout<<"After sorting your element are : ";


    for(int i =0;i<n;i++){
        cout<<arr[i]<<" ";
    }


return 0;
}

// #include<iostream>
// using namespace std;
// int partition(int arr[],int start,int end)
// {
//     int pos=start;
//     for(int i=start;i<=end;i++)
//     {
//         if(arr[i]<=arr[end])
//         {
//             swap(arr[i],arr[pos]);
//             pos++;
//         }
//     }
//     return pos-1;
// }
// void quickSort(int arr[],int start,int end)
// {
//     if(start>=end)
//     return;
//     int pivot=partition(arr,start,end);
//     quickSort(arr,start,pivot-1);  //left side
//     quickSort(arr,pivot,end);  //right side
// }
// int main()
// {
//     int arr[]={10,3,4,1,5,7,7,7,7,6,3,2,11,9};
//     quickSort(arr,0,13);
//     for(int i=0;i<14;i++)
//     {
//         cout<<arr[i]<<" ";
//     }
// }