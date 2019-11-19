//题目描述：
//在命令行输入如下命令：
//xcopy / s c : \ d : \，
//
//各个参数如下：
//
//参数1：命令字xcopy
//
//参数2：字符串 / s
//
//参数3：字符串c : \
//
//参数4 : 字符串d : \
//
//请编写一个参数解析程序，实现将命令行各个参数解析出来。
//思路:
//1.通过getline获取一行输入
//2.创建一个vector<string>保存用空格分开的字符串
//3.通过循环向vectotr里面插入
#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main()
{
	string s;
	getline(cin, s);
	vector<string> s;

}