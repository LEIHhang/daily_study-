////�ҳ��ظ�Ԫ���ظ������������鳤��һ����Ǹ�Ԫ��
//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Gift {
//public:
//	int getValue(vector<int> gifts, int n) {
//		// write code here
//		//�ҳ��ظ�Ԫ���ظ������������鳤��һ����Ǹ�Ԫ��
//		//˼·�������Ԫ���ظ�����һ�룬��ô����һ����ʶ���о����ҵ�
//		int key = gifts[0];
//		int count = 1;
//		for (int i = 1; i < gifts.size(); i++)
//		{
//			//�����Ԫ����������һ�룬��ô���key�϶����Ǹ�Ԫ��ֵ
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
//				//�������ñ�ʶֵ
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
