class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> m;
        for(int i=0;i<nums.size();i++)
        {
            auto it = m.find(target-nums[i]);
            if(it!=end(m))
            {
                return vector<int>{it->second,i};
            }
            m[nums[i]]=i;
        }
        return vector<int>(0);
    }
};