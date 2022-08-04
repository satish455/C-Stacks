#include<bits/stdc++.h>
using namespace std;
int ngr(int arr[],int n){
    stack<int>s;
    int ans[100000]={0};
    for(int i=n-1;i>=0;i--){
       if(s.size()==0){
        ans[i]=-1;
       }
       else if(s.size()>0 && s.top()>arr[i]){
        // ans.push_back(s.top());
        // s.pop();
        ans[i]=s.top();
       }
       else if(s.size()>0 && s.top()<=arr[i]){
         while(s.size()>0 && s.top()<=arr[i] ){
            s.pop();
         }
         if(s.size()==0){
            // ans.push_back(-1);
            ans[i]=-1;
         }
         else{
            ans[i]=s.top();
         }


       }
       s.push(arr[i]);
       
     return ans[i];

    }
    
   

   
}
void print(int ans[],int n){
    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }
}


int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<ngr(arr,n);
    // print(arr,n);
    






    return 0;

}