#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string reverseWords(string s) {
        int n = s.size();
        stack<string> st;
        
        int startIndex = 0;
        
        for(int i = 0; i<=n; i++){
            if(s[i] == ' ' || i == n){
                string subString = s.substr(startIndex, i - startIndex);
                if(!subString.empty()){
                    st.push(subString);
                }
                startIndex = i+1;
            }
        }
        
        string ans = "";
        
        while(!st.empty()){
            ans += st.top();
            ans += " ";
            st.pop();
        }
        
        if(!ans.empty() && ans.back() == ' '){
            ans.pop_back();
        }
        
        return ans;
    }
};