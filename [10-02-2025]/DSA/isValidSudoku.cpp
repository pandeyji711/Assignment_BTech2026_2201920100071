class Solution {
    public:
        bool isValidSudoku(vector<vector<char>>& board) {
            //cheak row
            for(int i=0;i<9;i++)
            {   
                 unordered_map<char,int>m;
                  for(int j=0;j<9;j++)
                  {
                        if(board[i][j]!='.'&&m.find(board[i][j])!=m.end())
                        return 0;
                        m[board[i][j]]++;
                  }
            }
            //cheak col
               for(int i=0;i<9;i++)
            {   
                 unordered_map<char,int>m;
                  for(int j=0;j<9;j++)
                  {
                        if(board[j][i]!='.'&&m.find(board[j][i])!=m.end())
                        return 0;
                         m[board[j][i]]++;
                  }
            }
            //3X3
           for(int i=0;i<9;i=i+3)
           {
                for(int j=0;j<9;j=j+3)
                {
                     unordered_map<char,int>m;
                     for(int k=i;k<i+3;k++)
                     {
                          for(int l=j;l<j+3;l++)
                        {
                            if(board[k][l]!='.'&&m.find(board[k][l])!=m.end())
                               return 0;
                         m[board[k][l]]++;
    
                          }
                     }
                }
           }
    
    
            return 1;
            
                }
    };