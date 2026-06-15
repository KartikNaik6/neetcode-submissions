class Solution {
public:
    bool isValid(string s) {
        stack <char> st;
        for(auto it : s){
            if(st.empty() && (it == '}' || it == ']' || it == ')')) return false;
            if(it == '{' || it == '[' || it =='('){
                st.push(it);
            }
            else{
                switch(it){
                    case '}':
                        if(st.top()!='{'){
                            return false;
                        }
                        else{
                            st.pop();
                            break;
                        }
                    case ']':
                        if(st.top()!='['){
                            return false;
                        }
                        else{
                            st.pop();
                            break;
                        }
                    case ')':
                        if(st.top()!='('){
                            return false;
                        }
                        else{
                            st.pop();
                            break;
                        }
                }
            }
        }
        if(!st.empty()) return false;
        return true;
    }
};
