//#include<iostream>
//using namespace std;
//int converdate(int &year, int &month, int &day)
//{
//	int mo[] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
//	//1.�ж��Ƿ�������
//	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
//	{
//		mo[2] = 29;
//	}
//	//2.�ж������Ƿ�Ϸ�
//	if (month < 1 || month>12)
//		return -1;
//	if (mo[month] < day || day < 0)
//		return -1;
//	//3.ѭ���ۼ����
//	int date = 0;
//	for (int i = 1; i < month; i++)
//	{
//		date += mo[i];
//	}
//	date += day;
//	return date;
//}
//int main()
//{
//	int year, month, day;
//	while (1)
//	{
//		cin >> year >> month >> day;
//		cout << converdate(year, month, day) << endl;
//	}
//}