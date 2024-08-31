#include <iostream>
#include <vector>
#include <algorithm>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::find;

int main( void ) {
	int	a, input;
	vector<int> first, second,res;

	cin >> a;
	for (int i = 0; i < a; i++) {
		cin >> input;
		first.push_back(input);
	}

	cin >> a;
	for (int i = 0; i < a; i++) {
		cin >> input;
		second.push_back(input);
	}

	// Remove Duplicate Elements
	vector<int>::iterator it;
	for ( auto i = 0; i < first.size(); i++ ) {
		it = std::find(second.begin(), second.end(), first[i]);
		if (it == second.end())
			res.push_back(first[i]);
	}

	cout << res.size() << endl;
	for ( int i = 0; i < res.size(); i++ ) {
		cout << res[i];
		if (i + 1 != res.size())
			cout << ' ';
	}
}
