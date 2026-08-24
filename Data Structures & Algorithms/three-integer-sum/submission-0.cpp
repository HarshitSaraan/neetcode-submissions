class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> result;
        for(int i=0; i<nums.size()-2; i++){
            if(i>0 && nums[i] == nums[i-1])
                continue;
            int* l = &nums[i+1];
            int* r = &nums[nums.size()-1];
            while(l < r){
                int sum = *l + *r + nums[i];
                if(sum > 0)
                    r--;
                else if(sum < 0)
                    l++;
                else{
                    result.push_back({nums[i], *l, *r});
                    l++;
                    r--;
                    while(l < r && *l == *(l-1))
                        l++;
                    while(l < r && *r == *(r+1))
                        r--;
                }
            }
        }

        return result;
    }
};