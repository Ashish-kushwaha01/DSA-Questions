/* Can we divide these array into two subarray whose sum are equal to each other .
   If yes , then return "yes",else return "NO".
*/

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int arr[]= {3,4,-2,5,8,20,-10,8};
    int end=1;
    while(end<8){    
                            // NOTE , THIS IS BRUTEFUL APPROACH BECAUSE IT'S TIME COMPLEXITY IS O(N).
        int sum=0,add=0;
        for(int i=0;i<end;i++){
            sum+=arr[i];
        }
        for(int j=end;j<8;j++){
            add+=arr[j];
        }

        if(sum==add){
            cout<<"Yes ,your array can be divided into two parts .";
            break;
           
        }
         else end++;
    }

    return 0;
}