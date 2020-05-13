#include<iostream>
#include<vector>
using namespace std;
int removeDuplicates(vector<int> &nums)
{
    for (int i = 1; i < nums.size(); i++)
    {
        if (nums[i] == nums[i - 1] || nums[i] < nums[i - 1])
        {
            for (int j = i + 1; j < nums.size(); j++)
            {
                if (nums[j] > nums[i - 1])
                    nums[i] = nums[j];
            }
        }
        if (nums[i] == nums[nums.size()])
            return i + 1;
    }
    return nums.size();
}
int main()
{
    vector<int> nums{1,1,2};
    int num = removeDuplicates(nums);
    for(int i=0;i<num;i++)
    {
        cout<<nums[i]<<"-";
        cout<<endl;
    }
    return 0;
}
