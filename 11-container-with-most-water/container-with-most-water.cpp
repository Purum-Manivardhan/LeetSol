class Solution {
public:
    int maxArea(vector<int>& height) {
       int n=height.size();
       int lp=0,rp=n-1; 
       int maxwater=INT_MIN;
       int w=0,ht=INT_MAX;
       while(lp<rp){
        w=rp-lp;
        ht=min(height[lp],height[rp]);
        int currwater=w*ht;
        maxwater=max(maxwater,currwater);
        if(height[lp]<height[rp]){
            lp++;
        }
        else{
            rp--;
        }
       }
       return maxwater;
    }
};