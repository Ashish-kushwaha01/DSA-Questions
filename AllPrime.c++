 /* Write a progam to print all prime no. between a given no .*/
 #include<iostream>
 using namespace std;
 int main(){
    int n;
    cout<<"Enter your no. : ";
    cin>>n;
        bool flag = true;

   int k = 1;
    for(int i=2;i<=n;i++){
         flag = true;
        for(int j=2;j<i;j++){
            if(i%j == 0){
                flag = false;
                break;
            }
        }
            if( flag == true){
                if(i==2 || i==3 || i == 5){
                    k= k*i;
                    
                        
                    }
                }
                else {
                    cout<<"Your prime no. is greater than 5 ";
                    return 0;
                } 
                if(k==n){
                        cout<<"Your prime no. is to your original no. ";
                        return 0;
                }
                
                cout<<i<<" ";
            }
             
            
            // i++;
        
    
    cout<<k<<" ";

    return 0;
 }