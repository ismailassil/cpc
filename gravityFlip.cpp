#include <iostream>
#include <vector>
#include <algorithm>

using std::cin;
using std::cout;

int main( void ) {
	int	ac, input;
	std::vector<int> vec;

	cin >> ac;
	for (int i = 0; i < ac; i++) {
		cin >> input;
		vec.push_back(input);
	}

	int i = 0;
	std::sort(vec.begin(), vec.end());
	for (const auto& elem : vec) {
		cout << elem;
		if (i + 1 != ac)
			cout << ' ';
		i++;
	}
}
