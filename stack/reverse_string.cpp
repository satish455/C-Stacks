#include<bits/stdc++.h>
using namespace std;
int main(){
   
        
    string str;
    cin>>str;
    stack<char>st;
    string ans=" ";
    for(int i=0;i<str.size();i++){
        cin>>str[i];
        char ch=str[i];
        st.push(ch);
    }
    while(!st.empty()){
        ans=st.top();
        st.pop();
        cout<<ans;
    }


    }
