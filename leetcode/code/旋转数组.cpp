class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int temp;
        int count=0;
        for(int start=0;count<nums.size();++start)
        {
            int current = start;
            int prev = nums[start];
            do
            {
                int next=(current+k)%nums.size();
                temp=nums[next];
                nums[next]=prev;
                prev = temp;
                current=next;
                ++count;
            }while(current!=start);
        }
    }
};