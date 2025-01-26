class Solution {
public:
    vector<int> countMentions(int numberOfUsers, vector<vector<string>>& events) {
        int n=numberOfUsers;
        vector<int>online(n,1);
        vector<int>m(n,0);
        unordered_map<int,int>m1;
            sort(events.begin(), events.end(), [](const vector<string>& a, const vector<string>& b) {
        // Compare based on the second element (numerically)
        if (stoi(a[1]) != stoi(b[1])) {
            return stoi(a[1]) < stoi(b[1]);
        }
        // If second elements are equal, prioritize "OFFLINE" over "MESSAGE"
        return a[0] == "OFFLINE";
    });
        for(int i=0;i<events.size();i++)
        {
                 
                    if(events[i][0]=="MESSAGE")
                    {
                          int time=stoi(events[i][1]);
                        //       while(!q.empty()&&q.top().first<=time)
                        //   {
                        //       cout<<q.top().second<<"p"<<q.top().first<<" ";
                        //       online[q.top().second]=1;
                        //       q.pop();
                        //   }
                        for(auto a1:m1)
                        {
                             if(a1.second<=time)
                             {
                                  online[a1.first]=1;
                             }
                        }
                        
                         if(events[i][2]=="HERE")
                         {
                                for(int j=0;j<n;j++)
                                 {
                                      if( online[j]==1)
                                      {
                                        // cout<<j<<"h"<<" ";
                                       m[j]+=1;
                                      }
                                 }
                         }
                      
                         else if(events[i][2]=="ALL")
                         {
                                 for(int j=0;j<n;j++)
                                 {
                                       m[j]+=1;
                                 }
                         }
                       else
                         {
                                stringstream ss(events[i][2]);  
    string token;

    while (ss >> token) { 
        if (token.substr(0, 2) == "id") { 
            int num = stoi(token.substr(2)); 
            m[num]++;  
                }
    }
                         }
                         
                    }
                    else
                    {
                          int time=stoi(events[i][1]);
                          int num=stoi(events[i][2]);
                        //   cout<<time+60<<" "<<num<<endl;
                          m1[num]=time+60;
                          online[num]=0;
                        // q.push({time+60,num});
                    }
        }
        return m;
    }
};