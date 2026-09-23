class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int fe=0;
        int n=nums.size();
        int cu=0;
        for(int i=0;i<n;i++){
            if(fe==0){
                cu=nums[i];
            }
            if(cu==nums[i]){
                fe++;
            }
            else{
                fe--;
            }
        }
        return cu;
    }
};