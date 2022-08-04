#include<bits/stdc++.h>
using namespace std;
void insertAtBottom(stack<int>&st,int element){
    if(st.empty()){
        st.push(element);
        return;

    }
    int num=st.top();
    st.pop();
    insertAtBottom(st,element);
    st.push(num);
}

int main(){
    int x;
    cin>>x;
    stack<int>s;
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        s.push(i);
    }
    insertAtBottom(s,x);
    while(!s.empty()){
       int num= s.top();
        s.pop();
        cout<<num<<" ";
    }

    cout<<endl;


    return 0;
}

