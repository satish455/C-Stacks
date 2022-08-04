#include<bits/stdc++.h>
using namespace std;

void ascpush(stack<int> &stack,int num){
    if(stack.empty()||stack.top()<num){
        stack.push(num);
        return;
    }
    int n=stack.top();
    stack.pop();
    ascpush(stack,num);
    stack.push(n);
    
}


void sortStack(stack<int> &stack)
{
	if(stack.empty()){
        return ;
    }
    int num=stack.top();
    stack.pop();
    sortStack(stack);
    ascpush(stack,num);
}
// void print(stack<int>&stack){
//     while(!stack.empty()){
//         cout<<stack.top()<<" ";
//         stack.pop();
//     }
// }
int main(){
    int n;
    cin>>n;
    int arr[n];
    stack<int>stack;
    

    
   

    
    for(int i=0;i<n;i++){
        cin>>arr[i];
       stack.push(arr[i]);
    }
    int ans[10000]={ };
    
    sortStack(stack);
    while(!stack.empty()){
       cout<<stack.top()<<" ";
       stack.pop();
    }


}