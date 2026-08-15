class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> check;
        for(int num : nums){
            if(check.find(num) != check.end()){
                return true;
            }
            check.insert(num);
        }
        return false;
    }
};