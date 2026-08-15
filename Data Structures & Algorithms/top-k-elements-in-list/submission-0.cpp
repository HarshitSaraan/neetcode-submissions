class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        for(int i=0; i<nums.size(); i++){
            if(mp.find(nums[i]) != mp.end()){
                mp[nums[i]]++;
            }
            mp.insert({nums[i], 1});
        }

        vector<pair<int, int>> v;
        for(auto &p : mp){
            v.push_back({p.second, p.first});
        }

        sort(v.rbegin(), v.rend());
        vector<int> res;
        for(int i=0; i<k; i++){
            res.push_back(v[i].second);
        }

        return res;

    }
};
