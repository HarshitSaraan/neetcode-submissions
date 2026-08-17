class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n, 1);
        int prefix = 1;
        for(int i=0; i<n; i++){
            ans[i] = prefix;
            prefix *= nums[i];
        }
        int sufix = 1;
        vector<int> suf(n,1);
        for(int i=n-1; i>=0; i--){
            suf[i] = sufix;
            sufix *= nums[i];
        }

        for(int i=0; i<n; i++){
            ans[i] = ans[i] * suf[i];
        }

        return ans;
    }
};
