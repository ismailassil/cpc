#include <iostream>

using	std::cin;
using	std::cout;

int main( void ) {
	int	num_of_friends;
	int	fence_height;
	int	single_height;
	int	total_width = 0;

	cin >> num_of_friends;
	cin >> fence_height;
	while (num_of_friends > 0) {
		single_height = 0;
		cin >> single_height;
		if (single_height > fence_height) {
			total_width += 2;
		}
		else
			total_width++;
		num_of_friends--;
	}
	cout << total_width << '\n';
	return (0);
}