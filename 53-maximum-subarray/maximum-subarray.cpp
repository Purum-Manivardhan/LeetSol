class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int cu=0;
        int maxsum= INT_MIN;
        for(int i=0;i<nums.size();i++){
            cu+=nums[i];
            maxsum=max(cu,maxsum);
            if(cu<0){
                cu=0;
            }
        }
        return maxsum;
    }

};