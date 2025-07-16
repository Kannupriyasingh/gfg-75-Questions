class Solution {
  public:
    bool isBalanced(string& k) {
        stack<char> st;

        for(char c : k) {
            if(c == '(' || c == '{' || c == '[') {
                st.push(c);
            } else {
                if(st.empty()) return false;

                char topEle = st.top();
                if((c == ')' && topEle == '(') ||
                   (c == '}' && topEle == '{') ||
                   (c == ']' && topEle == '[')) {
                    st.pop();
                } else {
                    return false;
                }
            }
        }
        return st.empty();
    }
};
