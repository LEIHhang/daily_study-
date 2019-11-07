#include<iostream>
#include<vector>
using namespace std;
int main(){
	int n;
	while (cin >> n){
		vector<int> v;
		for (int i = 0; i < n; i++){
			int couse;
			cin >> couse;

			v.push_back(couse);
		}
		v[n] = 0;
		auto start = v.begin();
		int sum = 0;
		while (start != v.end()-1){//v.end()-1是设置的0的位置

			if (start!=v.end()-1 && *start <= *(start+1)){
				++start;
				while (start != v.end() - 1 && *start <= *(++start)){
				}
				sum++;
				if (start == v.end() - 1){
					break;
				}
			}
			if (start != v.end() - 1 && *start >= *(start+1)){
				++start;
				while (start != v.end() - 1 && *start >= *(++start)){
				}
				sum++;
				if (start == v.end() - 1){
					break;
				}
			}
			if (start == v.end() - 1){
				sum++;
				break;
			}
		}
		cout << sum << endl;
	}
}