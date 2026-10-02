class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int sum=0;
        for(int i=0; i<nums.size(); i++) {
            for(int j=1; j<nums.size()-1; j++) {
                sum += nums[i]+nums[j];
                if(sum==target){
                    return {i,j};
                }
            }
        }
        return {};
    }
};
