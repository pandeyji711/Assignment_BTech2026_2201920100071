class Solution {
        public:
            vector<vector<string>> groupAnagrams(vector<string>& strs) {
                vector<int> v;
                unordered_map<string, vector<string>> m;
                for (int i = 0; i < strs.size(); i++) {
                    string str = strs[i];
                    sort(str.begin(), str.end());
                    m[str].push_back(strs[i]);
                }
                vector<vector<string>> ans;
                for (auto& a1 : m) {
                    ans.push_back(a1.second);
                }
                return ans;
            }
        };