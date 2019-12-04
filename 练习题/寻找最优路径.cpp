//////小东所在/*公司要发年终奖，而小东恰好获得了最高福利，
////他要在公司年会上参与一个抽奖游游戏在一个6 * 6的棋盘上进行，
////上面放着36个价值不等的礼物，每个小的棋盘上面放置着一个礼物，
////他需要从左上角开始游戏，每次只能向下或者向右移动一步，到达右下角停止，
////一路上的格子里的礼物小东都能拿到，请设计一个算法使小东拿到价值最高的礼物*/
//
//#include<iostream>
//#include<vector>
//using namespace std;
//
////思路：这是一个动态规划问题，那就要找到状态和状态转移方程
////状态：当前走到当前位置能拿到的价值
////状态转移方程：当前位置可以由上一个位置或左边位置较大值 + 当前位置值得到
////当然 处于第一行的位置只能由左边加，处在第一列的位置只能从上面加下来
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
//			return board[i][j] + ret;//加 （上一个位置）或者（左一个位置）的较大值
//		}
//	}
//};
//
