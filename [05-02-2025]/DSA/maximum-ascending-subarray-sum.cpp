class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        int l=0;
        int ans=nums[0];
        int r=1;
        int pre=nums[0];
        int temp=ans;
        while(r<nums.size())
        {
                if(pre>=nums[r])
                {
                    temp=nums[r];
                     ans=max(ans,temp);
                      pre=nums[r];
                   
                      r++;
                      
                }
                else{
                    
                    temp+=nums[r];
                    pre=nums[r];
                    ans=max(ans,temp);
                    r++;
                }
        }
        return ans;
    }
};