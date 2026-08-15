class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> m1;
        unordered_map<char, int> m2;

        if(s.length() != t.length()){
            return false;
        }

        for(int i=0; i<s.length(); i++){
            if(m1.count(s[i])){
                m1[s[i]]++;
            }
            if(m2.count(t[i])){
                m2[t[i]]++;
            }
            m1.insert({s[i], 1});
            m2.insert({t[i], 1});
        }

        if(m1 == m2){
            return true;
        }
        return false;
    }
};
