class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.empty())
            return 0;

        sort(nums.begin(), nums.end());
        int curr=1, ans = 1;
        for(int i=1; i<nums.size(); i++){
            if(nums[i] == nums[i-1] + 1){
                curr++;
                ans = max(curr, ans);
            }else if(nums[i] == nums[i-1]){
                continue;
            }
            else{
                curr = 1;
            }
        }
        return ans;
    }
};
