#include<bits/stdc++.h>
using namespace std;
void insertAtbottom(stack<int>&st,int ele){
   if(st.empty()){
    st.push(ele);
    return;
   }
   int num=st.top();
   st.pop();
   insertAtbottom(st,ele);
   st.push(num);
}

void reverse(stack<int>&st){
if(st.empty()){
    return;

}
int num=st.top();
st.pop();
reverse(st);
insertAtbottom(st,num);


}
int main(){
    stack<int>s;
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        s.push(i);
    }
    reverse(s);
    reverse(s);
    while(!s.empty()){
        int ans=s.top();
        s.pop();
        cout<<ans;
    }
    

}