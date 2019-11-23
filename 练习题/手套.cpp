//在地下室里放着n种颜色的手套，手套分左右手，但是每种颜色的左右手手套个数不一定相同。
//A先生现在要出门，所以他要去地下室选手套。
//但是昏暗的灯光让他无法分辨手套的颜色，只能分辨出左右手。
//所以他会多拿一些手套，然后选出一双颜色相同的左右手手套。
//现在的问题是，他至少要拿多少只手套(左手加右手)，才能保证一定能选出一双颜色相同的手套。
//给定颜色种数n(1≤n≤13), 同时给定两个长度为n的数组left, right, 分别代表每种颜色左右手手套的数量。
//数据保证左右的手套总数均不超过26，且一定存在至少一种合法方案。
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
//		//如果有0个的，则将对应的另一只手套需全部加入到取出的个数中。
//		//这样才能保证他不会占用其他手套的取出
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