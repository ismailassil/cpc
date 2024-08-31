#include <ios>
#include <iostream>
#include <map>

using std::map;
using std::cout;
using std::cin;
using std::ios_base;
using std::pair;

int	main( void ) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int	nbr = 0, target_sum = 0, input = 0, i = 0;
	int	a = 0, b = 0;
	map<int, int> mp;

	cin >> nbr >> target_sum;

	while (nbr) {
		cin >> input;
		auto it = mp.find(input);
		if (it != mp.end()) {
			a = it->second + 1, b = i + 1;
			break ;
		}
		mp.insert(pair<int, int>(target_sum - input, i++));
		nbr--;
	}

	if (a && b)
		cout << a << " " << b << "\n";
	else
		cout << "IMPOSSIBLE\n";
	return (0);
}