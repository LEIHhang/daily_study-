//#include<iostream>
//#include<stack>
//#include<string>
//using namespace std;
//int main()
//{
//	char c;
//	stack<string> s;
//	string line;
//	getline(cin, line);
//	string word;
//	auto start = line.begin();
//	auto it = start;
//	auto end = line.end();
//	while (it!=end)
//	{
//		while (it != end&& *it != ' ')
//		{
//			it++;
//		}
//		string word(start, it);
//		s.push(word);
//		if (it != end)
//		{
//
//			it++;
//			start = it;
//		}
//	}
//	while (!s.empty())
//	{
//		cout << s.top();
//		cout << ' ';
//		s.pop();
//	}
//
//}