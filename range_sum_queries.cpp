#include <algorithm>
#include <cstddef>
#include <ios>
#include <iostream>
#include <numeric>
#include <vector>
#define int long long

using namespace std;

int32_t main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n = 0, queries = 0, prev = 0;
	cin >> n >> queries;

	vector<int> vc(n);
	vector<int> accum(n + 1);
	accum.push_back(0);
	for (int i = 0; i < n; i++) {
		cin >> vc[i];
		accum[i + 1] = vc[i] + prev;
		prev += vc[i];
	}
	
	for (int i = 0; i < queries; i++) {
		int start = 0, end = 0; cin >> start >> end;
		cout << accum[end] - accum[start - 1] << '\n';
	}
	
}

