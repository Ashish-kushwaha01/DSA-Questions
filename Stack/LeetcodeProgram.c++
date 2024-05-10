 #include<iostream>
 #include<vector>
 #include<algorithm>
 #include<limits.h>
 #include<stack>
 using namespace std;
 int answer(vector<int>nums){
    int n = nums.size();
        int count =1;
        stack<int>st;
       int start=0,end=1;
       st.push(nums[start]);
     
       while(end<n){
        if((nums[start]==nums[end]) && (count<=1)){
            count++;
            st.push(nums[end]);
            end++;
        }
        else if(nums[start]!= nums[end]){
            count=0;
            st.push(nums[end]);
            start= end;
            end = end+1;
            count++;
        }
        else {
            end++;
        }
       }

       return st.size();
   
 }
 
 int main(){

cout<<"Enter that how many no you have : ";
int n;
cin>>n;
int a;
    vector<int>nums(n);
    cout<<"Enter your elements : ";
    for(int i=0;i<n;i++){
       cin>>nums[i];
    }
    
    cout<< answer(nums);

    
 }