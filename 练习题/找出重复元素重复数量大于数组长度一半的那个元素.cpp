////找出重复元素重复数量大于数组长度一半的那个元素
//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Gift {
//public:
//	int getValue(vector<int> gifts, int n) {
//		// write code here
//		//找出重复元素重复数量大于数组长度一半的那个元素
//		//思路：如果有元素重复超过一半，那么设置一个标识进行就能找到
//		int key = gifts[0];
//		int count = 1;
//		for (int i = 1; i < gifts.size(); i++)
//		{
//			//如果有元素数量超过一半，那么最后key肯定是那个元素值
//			if (key == gifts[i])
//			{
//				count++;
//			}
//			else
//			{
//				count--;
//			}
//			if (count == 0)
//			{
//				//重新设置标识值
//				key = gifts[i];
//				count = 1;
//			}
//		}
//		int sum = 0;
//		for (int i = 0; i < gifts.size(); i++)
//		{
//			if (gifts[i] == key)
//				sum++;
//		}
//		
//		if (sum >(gifts.size() / 2))
//			return key;
//		else
//			return 0;
//	}
//};
//
