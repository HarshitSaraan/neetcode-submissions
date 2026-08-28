class Solution {
public:

    bool opening(char c){
        if(c == '(' || c=='[' || c=='{')
            return true;
        return false;
    }
    char closing(char c){
        if(c == ')')
            return '(';
        if(c == ']')
            return '[';
        if(c == '}')
            return '{';
        return c;
    }

    bool isValid(string s) {
        stack<char> st;
        for(auto i : s){
            if(opening(i)) st.push(i);
            else{
                if(st.empty()) return false;

                if(closing(i) == st.top()) st.pop();

                else return false;
            }
        }
        if(st.empty())
            return true;
        return false;
    }
};