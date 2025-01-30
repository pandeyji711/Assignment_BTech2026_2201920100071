class Solution {
public:
    int minimumSum(vector<int>& nums) {
int ans=INT_MAX;
int n=nums.size();
     vector<int>v1(n,nums[0]);
      vector<int>v2(n,nums[n-1]);
   for(int i=1;i<nums.size();i++)
   {
        v1[i]=min(v1[i-1],nums[i]);
   }
   for(int i=n-2;i>=0;i--)
   {
        v2[i]=min(v2[i+1],nums[i]);
   }
   for(int i=1;i<nums.size()-1;i++)
   {
         if(nums[i]>v1[i-1]&&nums[i]>v2[i+1]){
        //   cout<<nums[i]<<" ";
         ans=min(ans,nums[i]+v2[i+1]+v1[i-1]);
         }
   }
        return ans==INT_MAX?-1:ans;
    }
};