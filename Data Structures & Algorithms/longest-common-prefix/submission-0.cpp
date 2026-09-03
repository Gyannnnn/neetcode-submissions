class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans = "";
        if (strs.empty()) return ans;

        for(int j = 0; j < strs[0].size(); j++){
            char st = strs[0][j];

            for(int i = 0; i < strs.size(); i++){
                if(j >= strs[i].size() || strs[i][j] != st) {
                    return ans;
                }
            }
            ans.push_back(st);
        }

        return ans;
    }
};