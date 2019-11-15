//#include<iostream>
//#include<list>
//
//using namespace std;
//int main(){
//	int n;
//	while (cin >> n){
//		list<int> l;
//		for (int i = 0; i < 3 * n; i++){
//			int couse;
//			cin >> couse;
//			l.push_back(couse);
//		}
//		l.sort();
//		int sum=0;
//		while (!l.empty()){
//			l.pop_front();
//			l.pop_back();
//			sum += l.back();
//			l.pop_back();
//		}
//		cout << sum << endl;
//	}
//}