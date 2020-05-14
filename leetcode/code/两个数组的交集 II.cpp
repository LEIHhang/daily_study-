class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        //使用哈希表
        if(nums1.size()>nums2.size())
            return intersect(nums2,nums1);
        unordered_map<int,int> m;
        for(auto n:nums1)
        {
            ++m[n];
        }
        int k=0;
        for(auto n2:nums2)
        {
            auto it = m.find(n2);
            if(it!=m.end()&&--it->second>=0)
            {
                nums1[k++] = n2;
            }
        }
        return vector<int>(nums1.begin(),nums1.begin()+k);
    }
};

class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
       //使用STL内置函数 set_intersection
       sort(nums1.begin(),nums1.end());
       sort(nums2.begin(),nums2.end());
       vector<int> rel;
       rel.resize(nums1.size());
       auto iter = set_intersection(nums1.begin(),nums1.end(),nums2.begin(),nums2.end(),rel.begin());
       //iter指向集合空间的末尾
       rel.resize(iter-rel.begin());
    }
};