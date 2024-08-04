class Solution {
public:
    string removeStars(string s) {
        stack<char> st;
        for(char x:s){
            st.push(x);
            if(st.top()=='*'){
                st.pop();
                st.pop();
            }
        }
        string s1;
        while(!st.empty()){
            s1+=st.top();
            st.pop();
        }
        reverse(s1.begin(),s1.end());
        return s1;
    }
};