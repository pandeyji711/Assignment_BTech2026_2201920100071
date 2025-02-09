
class Solution {
  public:
      long long countBadPairs(vector<int>& nums) {
          unordered_map<int,int>m;
          long long int  good=0;
          for(int i=0;i<nums.size();i++)
          {
                 if(m.find(nums[i]-i)==m.end())
                 {
  
                    m[nums[i]-i]=1;
                 }else
                 {
                      good+=m[nums[i]-i];
                      m[nums[i]-i]++;
                 }
          }
          long long int tem =nums.size()*(nums.size()-1)/2;
          return tem-good;
      }
  };