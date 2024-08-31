#include <iostream>
#include <map>
#include <utility>

using std::cout;
using std::cin;
using std::string;
using std::map;
using std::pair;
using std::multimap;

int main( void ) {
	int		ac;
	string	line;
	map<string, int> mp;

	cin >> ac;
	for (int i = 0; i < ac; i++) {
		cin >> line;
		if (mp.find(line) != mp.end())
			++mp[line];
		else
			mp.insert(pair<string, int>(line, 1));
	}

	multimap<int, string> mm;

	for (const auto& i : mp) {
		mm.insert({ i.second, i.first });
	}
	const auto& last = *mm.rbegin();
	cout << last.second << ' ' << last.first << '\n';
}
