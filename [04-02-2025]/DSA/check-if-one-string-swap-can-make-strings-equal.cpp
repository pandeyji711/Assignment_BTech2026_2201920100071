class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        unordered_map<char,int>m;
        char a1='#';
        char b1='#';
        int cnt=0;
        for(int i=0;i<s1.length();i++)
        {
               if(s1[i]!=s2[i]&cnt>=2)
               return false;
               else if(s1[i]!=s2[i]&&a1=='#')
               {
                   
                           a1=s1[i];
                           b1=s2[i];
                           cnt++;
                           continue;

               }else if(s1[i]!=s2[i])
               {
                      if(a1==s2[i]&&b1==s1[i])
                      {
                          cnt++;
                          continue;
                      }else
                      return false;
               }
        }
        return cnt==1?false:true;
    }
};