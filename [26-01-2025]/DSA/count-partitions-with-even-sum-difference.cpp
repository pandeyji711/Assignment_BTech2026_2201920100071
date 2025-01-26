class Solution {
public:
    int countPartitions(vector<int>& nums) {
        int ans=0;
        for(int i=0;i<nums.size()-1;i++)
        {
            //left
            int tem=0;
            for(int j=0;j<=i;j++)
            {
                tem+=nums[j];     
            }
            //right
            int tem1=0;
            for(int j=i+1;j<nums.size();j++)
            {
                   tem1+=nums[j];
            }
            if(abs(tem1-tem)%2==0){
            ans++;
            cout<<i<<" ";
            }
        }
         return ans;
    }
   
};