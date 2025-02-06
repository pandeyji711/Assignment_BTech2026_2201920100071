class Solution {
public:
    int tupleSameProduct(vector<int>& nums) {
        if(nums.size()<=3)
        return 0;
        unordered_map<int,int>m;
        int ans=0;
         for(int i=0;i<nums.size();i++)
         {
                  
                  for(int j=i+1;j<nums.size();j++)
                  {
                             int tem=nums[i]*nums[j];
                             m[tem]++;
                           
                  }
         }
         for(auto a1:m)
         {
              if(a1.second>=2)
              {
                    int tem=a1.second*(a1.second-1)/2;
                    ans+=8*tem;
              }
         }
        return ans;

    }
};