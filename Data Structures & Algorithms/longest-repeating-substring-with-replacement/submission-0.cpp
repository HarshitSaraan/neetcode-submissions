class Solution {
public:
    int characterReplacement(string s, int k) {
        vector<int> cnt(26,0);
        int left=0;
        int ans=0;
        int mf=0, window_size=0;
        for(int right=0; right<s.size(); right++){
            cnt[s[right]-'A']++;
            mf = max(mf, cnt[s[right]-'A']);
            while(((right - left + 1) - mf) > k){
                cnt[s[left]-'A']--;
                left++;
            }
            ans = max(ans, right - left + 1);
        }
        return ans;
    }
};