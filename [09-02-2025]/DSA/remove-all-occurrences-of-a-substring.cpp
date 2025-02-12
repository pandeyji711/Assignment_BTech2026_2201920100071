class Solution {
  public:
      string removeOccurrences(string s, string part) {
            int n=part.length();
            int ha=true;
            
            while(ha)
            {
              ha=false;
              
              for(int i=0;i<s.length();i++)
                    {
                   if(s.substr(i,n)==part)
                   {
                      //  cout<<i<<" "<<s<<endl;
                      int n1=s.length();
                        string tem=s.substr(0,i)+s.substr(i+n,n1-i);
                        s=tem;
                        ha=true;
                        break;
                   }
                    }
            }
            return s;
      }
  };