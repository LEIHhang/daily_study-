//#include<iostream>
//#include<vector>
//using namespace std;
//int getcake(int& w, int& h)
//{
//	vector<vector<int>> v;
//	v.resize(h);
//	for (auto& e : v)
//	{
//		e.resize(w , 1);
//	}
//	int ret = 0;
//	for (int i = 0; i < h; i++)
//	{
//		for (int j = 0; j < w; j++)
//		{
//			if (v[i][j] == 1)
//			{
//				ret++;
//				if (i + 2 < h)
//				{
//					v[i + 2][j] = 0;
//				}
//				if (j + 2 < w)
//				{
//					v[i][j + 2] = 0;
//				}
//			}
//		}
//	}
//	return ret;
//}
//int main()
//{
//	int w, h;//w是列，h是行
//	cin >> w >> h;
//	cout << getcake(w, h) << endl;
//}