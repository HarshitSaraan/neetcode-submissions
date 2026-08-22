class Solution {
public:

    bool isValid(char s){
        if(('a' <= s && s <= 'z') || ('0' <= s && s <= '9') || ('A' <= s && s <= 'Z'))
            return true;
        return false;
    }

    char upperTolow(char s){
        if('A' <= s && s <= 'Z'){
            return (s+32);
        }
        return s;
        
    }

    bool isPalindrome(string s) {
        char* p1 = &s[0];
        char* p2 = &s[s.size()-1];
        while(p1 < p2){
            if(!isValid(*p1)){
                p1++;
                continue;
            }
            if(!isValid(*p2)){
               p2--;
                continue;    
            }
            if(upperTolow(*p1) != upperTolow(*p2)){
                return false;
            }
            p1++;
            p2--;
        }
        return true;
        
    }
};
