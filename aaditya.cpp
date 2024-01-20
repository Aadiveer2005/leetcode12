class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int sum=0,minimum=0;
        for(int i=0;i<nums.size();i=i+2)
        {
            minimum=min(nums[i],nums[i+1]);
            sum+=minimum;
        }
        return sum;
    }
};