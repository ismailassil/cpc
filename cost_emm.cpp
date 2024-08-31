#include <cstddef>
#include <functional>
#include <ios>
#include <iostream>
#include <map>
#include <vector>
#include <algorithm>

using namespace std;

int main( void ) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int test_cases = 0;
	cin >> test_cases;

	while (test_cases--) {
		int size = 0, common = 0, cc = 0, k = 0;
		
		cin >> size >> common;
		vector<int> v;
		for (int i = 0; i < size; i++) {
			int flag = 0;
			cin >> k;
			if (common == k) flag = 1, cc++;
			if (flag) v.push_back(k);
		}
		if (v.size() == 0) {
			cout << "NO\n";
		}
		else {
			sort(v.begin(), v.end());
			int j = 0, flag = 0;
			for (int i = 0; i < v.size() - 1; i++) {
				if (v[i] == v[i + 1]) j++;
				if (j > cc) {
					flag = 1;
					break ;
				}
				if (v[i] != v[i + 1]) j = 0;
			}
			if (flag == 1) cout << "NO\n";
			else cout << "YES\n";
		}
	}
}