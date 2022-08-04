#include<bits/stdc++.h>
using namespace std;
bool isValidParenthesis(string expression)
{
    stack<char>st;
    for(int i=0;i<expression.length();i++){
        char ch=expression[i];

        // for opening bracket
        if(ch=='('||ch=='{'||ch=='['){
            st.push(ch);
        }
        // for closing bracket
        else{
            if(!st.empty()){
                char top=st.top();
                if((ch==')' && top=='(')||
                   (ch=='}' && top=='{')|| 
                   (ch==']' && top=='[')){
                    st.pop();
                }
             
            // if stack is not empty then check
            
                else{
                    return false;
                }
            }
            else{
                return false;
            }
        }

    }
     if(st.empty()){
         return true;
     }
      else{
          return false;
      }
        
}



int main(){
    int t;
    cin>>t;
    while(t--){
        string str;
    cin>>str;

    
    isValidParenthesis(str)?cout<<"valid":cout<<"nonvalid";

    }
    
   
    

}