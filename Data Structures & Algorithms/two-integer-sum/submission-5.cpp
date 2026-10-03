class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> mp;

        for (int i = 0; i < nums.size(); i++) {
            mp[nums[i]] = i;
        }

        for (int i = 0; i < nums.size(); i++) {
            int moreRequired = target - nums[i];

            auto el = mp.find(moreRequired);

            if (el != mp.end() && el->second != i) {
                return {i, el->second};
            }
        }

        return {-1, -1};
    }
};
