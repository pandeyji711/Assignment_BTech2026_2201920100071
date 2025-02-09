class Solution {
    public:
      bool solve(string str1, string str2)
        {
              int n=str2.length();
              int st=str1.length()-n;
            //   cout<<str1.substr(0,n)<<" "<<str1.substr(st,n)<<endl;
              return str1.substr(0,n)==str2&&str1.substr(st,n)==str2;
        }
        int countPrefixSuffixPairs(vector<string>& words) {
            
              int ans=0;
              for(int i=0;i<words.size();i++)
              {
                         for(int j=i+1;j<words.size();j++)
                         {
                               if(words[j].length()>=words[i].length()&&solve(words[j],words[i]))
                               ans++;
                         }
              }
              return ans;
        }
    };