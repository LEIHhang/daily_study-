//////С������/*��˾Ҫ�����ս�����С��ǡ�û������߸�����
////��Ҫ�ڹ�˾����ϲ���һ���齱����Ϸ��һ��6 * 6�������Ͻ��У�
////�������36����ֵ���ȵ����ÿ��С���������������һ�����
////����Ҫ�����Ͻǿ�ʼ��Ϸ��ÿ��ֻ�����»��������ƶ�һ�����������½�ֹͣ��
////һ·�ϵĸ����������С�������õ��������һ���㷨ʹС���õ���ֵ��ߵ�����*/
//
//#include<iostream>
//#include<vector>
//using namespace std;
//
////˼·������һ����̬�滮���⣬�Ǿ�Ҫ�ҵ�״̬��״̬ת�Ʒ���
////״̬����ǰ�ߵ���ǰλ�����õ��ļ�ֵ
////״̬ת�Ʒ��̣���ǰλ�ÿ�������һ��λ�û����λ�ýϴ�ֵ + ��ǰλ��ֵ�õ�
////��Ȼ ���ڵ�һ�е�λ��ֻ������߼ӣ����ڵ�һ�е�λ��ֻ�ܴ����������
//class Bonus {
//public:
//	int getMost(vector<vector<int> > board) {
//		// write code here
//		int i = 5;
//		int j = 5;
//		return _getMost(board, i, j);
//	}
//
//	int _getMost(vector<vector<int>>& board, int i, int j)
//	{
//		if (i == 0 && j == 0)
//		{
//			return board[0][0];
//		}
//		else if (i == 0 && j>0)
//		{
//			return board[i][j] + _getMost(board, i, j - 1);
//		}
//		else if (j == 0 && i >= 0)
//		{
//			return board[i][j] + _getMost(board, i - 1, j);
//		}
//		else
//		{
//			int ret = _getMost(board, i - 1, j) > _getMost(board, i, j - 1) ? _getMost(board, i - 1, j) : _getMost(board, i, j - 1);
//			return board[i][j] + ret;//�� ����һ��λ�ã����ߣ���һ��λ�ã��Ľϴ�ֵ
//		}
//	}
//};
//
