#include <cstddef>
#include <ios>
#include <iostream>
#include <algorithm>

using namespace std;

int main( void ) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	string str; cin >> str;
	int i = 0, j = 0; cin >> i >> j;

	i--;
	j--;
	while (i <= j) swap(str[i++], str[j--]);
	cout << str;

	return (0);
}
