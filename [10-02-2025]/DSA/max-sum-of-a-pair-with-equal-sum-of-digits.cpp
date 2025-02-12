class Solution {
  public:
      int maximumSum(vector<int>& nums) {
          unordered_map<int,priority_queue<int>>m;
          for(int i=0;i<nums.size();i++)
          {
                 int n=nums[i];
                 int sum=0;
                 while(n)
                 {
                   int r=n%10;
                     sum+=r;
                     n=n/10;
                 }
                 m[sum].push(nums[i]);
          }
          int ans=-1;
          for( auto a1:m)
          {
                 if(a1.second.size()<2)
                 {
                      continue;
                 }else{
                      
                       int num1=a1.second.top();
                       a1.second.pop();
                       int num2=a1.second.top();
                       a1.second.pop();
                       ans=max(ans,num1+num2);
                 }
          }
          return ans;
      }
  };