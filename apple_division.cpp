#include <functional>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main( void ) {
	ios_base::sync_with_stdio(false);
	cout.tie(NULL);
	cin.tie(NULL);

	int	sum = 0, n = 0, left_backet = 0, right_backet = 0;

	cin >> n;
	vector<int>	vc(n);

	int num = 0;
	for (int& i : vc) {
		cin >> num;
		i = num;
		sum += num;
	}

	sort(vc.begin(), vc.end(), greater<>());

	for ( int i = 0; i < n; i++) {
		
	}
}
