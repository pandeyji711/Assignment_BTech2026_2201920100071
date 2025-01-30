class Solution {
public:
int dp[51][51][4];
  int solve(vector<int>& nums,int ind ,int pre,int cnt)
  {  
              if(cnt==3)
              return 0;
              if(ind>=nums.size())
              {

                       return INT_MAX;
              }

              if(dp[ind][pre][cnt]!=-1)
              return dp[ind][pre][cnt];
              int x=INT_MAX, y=INT_MAX;
              //if cnt==0
              if(cnt==0)
              {
                    int tem=solve(nums,ind+1,nums[ind],cnt+1);
                      if(tem<INT_MAX)
                   x=nums[ind]+tem;
              }else if(cnt==1&&pre<nums[ind])
              {
                      int tem=solve(nums,ind+1,nums[ind],cnt+1);
                      if(tem<INT_MAX)
                   x=nums[ind]+tem;
              }
              else if(cnt==2&&pre>nums[ind])
              {
                    int tem=solve(nums,ind+1,nums[ind],cnt+1);
                      if(tem<INT_MAX)
                   x=nums[ind]+tem;
              }
              y=solve(nums,ind+1,pre,cnt);
              return  dp[ind][pre][cnt]= min(x,y);

  }
    int minimumSum(vector<int>& nums) {
        // int ans=0;
      memset(dp,-1,sizeof(dp));
        int res=solve(nums,0,0,0);
        return res==INT_MAX?-1:res;
    }
};