class Solution {
public:
    bool isPalindrome(string s) {
        string t = "";
        for(int i=0; i<s.size(); i++){
            if('A' <= s[i] && s[i] <= 'Z')
                t += s[i] + 32;
            else if(('a' <= s[i] && s[i] <= 'z') || ('0' <= s[i] && s[i] <= '9'))
                t += s[i];
            else
                continue;
        }
        int j=0;
        string r(t.size(), ' ');
        for(int i=t.size()-1; i>=0; i--){
            r[j] = t[i];
            j++;
        }
        if(r == t){
            return true;
        }
        return false;
    }
};
