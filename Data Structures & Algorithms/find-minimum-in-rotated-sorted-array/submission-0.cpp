class Solution {
public:
    int findMin(vector<int> &nums) {
        int s = nums.size();
        int high = s-1;
        int low = 0;
        int mid = 0;
        while(low < high){
            mid = (low+high)/2;
            if(nums[mid] > nums[high]){
                low = mid+1;
            }
            else{
                high = mid;
            }
        }
        return nums[high];
    }
};
