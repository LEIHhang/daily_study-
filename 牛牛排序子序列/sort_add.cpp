#include<iostream>
#include<vector>
using namespace std;
int main(){
	int n;
	while (cin >> n){
		vector<int> v;
		v.resize(n + 1);
		for (int j = 0; j < n; j++){
			int couse;
			cin >> couse;
			v[j]=couse;
		}
		v[n] = 0;
		int sum = 0;
		int i = 0;
		while (i < n){
			if (v[i] < v[i + 1]){
				while (i < n && v[i] <= v[i + 1]){//����������β
					i++;
				}
				sum++;
				i++; //����һ����ͷ
			}
			else if (v[i] == v[i + 1]){
				i++;
			}
			else {
				while (i < n && v[i] >= v[i + 1]){//����������β
					i++;
				}
				sum++;
				i++; //����һ����ͷ
			}

		}
		cout << sum << endl;

	}
}