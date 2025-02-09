class NumberContainers {
  public:
      unordered_map<long long,long long>m;
      unordered_map<long long,priority_queue<int,vector<int>,greater<int>>>mq;
      NumberContainers() {
          
      }
      
      void change(int index, int number) {
          m[index]=number;
          mq[number].push(index);
      }
      
      int find(int number) {
            while(!mq[number].empty())
            {
  
                 if(m[mq[number].top()]==number)
                 return mq[number].top();
                 mq[number].pop();
            }
          return -1;
      }
  };
  
  /**
   * Your NumberContainers object will be instantiated and called as such:
   * NumberContainers* obj = new NumberContainers();
   * obj->change(index,number);
   * int param_2 = obj->find(number);
   */