#include <iostream>

using std::cin;
using std::cout;

int main( void ) {
	int	ac;
	cin >> ac;

	int arr[ac];
	for (int i = 0; i < ac; i++) {
		int	num = 0;
		cin >> num;
		arr[i] = num;
	}
	for (int i = 0; i < ac; i++) {
		if (arr[i] >= 0)
			cout << arr[i] + 2;
		else
			cout << arr[i];
		if (i + 1 != ac)
			cout << " ";
	}
	return (0);
}