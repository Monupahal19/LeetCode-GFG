#include<bits/stdc++.h>
class Solution {
public:
    bool isValid(string s) {
       stack<char> st;
        
        for(int i=0;i<s.length();i++){
            char cur=s[i];
            
            if(isOpening(cur)){
                st.push(cur);
            }
            else{
                if(st.empty()){
                    return false;
                }
                else if(!isMatching(st.top(),cur)){
                    return false;
                }
                else{
                    st.pop();
                }
            }
        }
        return st.empty();
    }
    bool isOpening(char c){
        return (c=='(' ) || (c== '{' ) || ( c=='[' );
    }
    bool isMatching(char a,char b){
        return ( a=='(' && b==')' ) ||
               ( a=='{' && b=='}' ) ||
               ( a=='[' && b==']' );
    }
};
