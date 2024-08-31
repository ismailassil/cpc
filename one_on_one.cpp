#include <ios>
#include <iostream>

using namespace std;

int main( void ) {
	std::ios_base::sync_with_stdio(false);
	cin.tie();

	int	alice = 0, barbra = 0;
	string		line;
	const char	*str_line;

	cin >> line;

	str_line = line.c_str();
	for (int i = 0; i < line.length(); i++) {
		if (line[i] == 'A') {
			i++;
			std::string	number_str(1, line[i]);
			alice += std::atoi(number_str.c_str());
		}
		else if (line[i] == 'B') {
			i++;
			std::string	number_str(1, line[i]);
			barbra += std::atoi(number_str.c_str());
		}
	}

	int alice_diff = alice - barbra;
	int	barbra_diff = barbra - alice;
	if (alice >= 10 && barbra < 10)
		cout << "A\n";
	else if (alice < 10 && barbra >= 10)
		cout << "B\n";
	else if (alice >= 10 && barbra >= 10 && alice_diff > 0 && abs(alice_diff) >= 2)
		cout << "A\n";
	else if (alice >= 10 && barbra >= 10 && barbra_diff > 0 && abs(barbra_diff) >= 2)
		cout << "B\n";
	return (0);
}
