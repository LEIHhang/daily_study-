//�ڵ����������n����ɫ�����ף����׷������֣�����ÿ����ɫ�����������׸�����һ����ͬ��
//A��������Ҫ���ţ�������Ҫȥ������ѡ���ס�
//���ǻ谵�ĵƹ������޷��ֱ����׵���ɫ��ֻ�ֱܷ�������֡�
//�����������һЩ���ף�Ȼ��ѡ��һ˫��ɫ��ͬ�����������ס�
//���ڵ������ǣ�������Ҫ�ö���ֻ����(���ּ�����)�����ܱ�֤һ����ѡ��һ˫��ɫ��ͬ�����ס�
//������ɫ����n(1��n��13), ͬʱ������������Ϊn������left, right, �ֱ����ÿ����ɫ���������׵�������
//���ݱ�֤���ҵ�����������������26����һ����������һ�ֺϷ�������
//class Gloves {
//public:
//	int &min(int&a, int&b)
//	{
//		if (a > b)
//			return b;
//		else
//			return a;
//	}
//	int findMinimum(int n, vector<int> left, vector<int> right) {
//		// write code here
//		//�����0���ģ��򽫶�Ӧ����һֻ������ȫ�����뵽ȡ���ĸ����С�
//		//�������ܱ�֤������ռ���������׵�ȡ��
//		int leftmin = 27, rightmin = 27;
//		int leftsum = 0, rightsum = 0;
//		int sum = 0;
//		for (int i = 0; i < n; i++)
//		{
//			if (left[i] * right[i] == 0)
//				sum += (left[i] + right[i]);
//			else
//			{
//				leftsum += left[i];
//				rightsum += right[i];
//				leftmin = min(leftmin, left[i]);
//				rightmin = min(rightmin, right[i]);
//			}
//		}
//		int lefta = leftsum - leftmin + 1;
//		int righta = rightsum - rightmin + 1;
//
//		return sum + min(lefta, righta) + 1;
//	}
//};