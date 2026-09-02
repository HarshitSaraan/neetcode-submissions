class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int left=0;
        int ans=0;
        unordered_map<char, int> m;
        for(int right=0; right<s.size(); right++){
            while(m[s[right]] > 0){
                m[s[left]]--;
                left++;
            }
            m[s[right]]++;
            ans = max(ans, right-left+1);
        }
        return ans;
    }
};