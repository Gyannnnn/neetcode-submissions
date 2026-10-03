class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int,int> mpp;
        int majorityElement = 0;
        for(int i = 0;i<nums.size(); i++){
            mpp[nums[i]]++;
        }
        for(auto x:mpp){
            if(x.second > nums.size() / 2){
                return x.first;
            }
        }


    }
};