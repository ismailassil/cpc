#include <iostream>
#include <stack>
#include <algorithm>

using std::cin;
using std::cout;
using std::stack;

int main( void ) {
	std::ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int	nbr = 0, n = 0, tobepushed = 0;
	stack<int> stk;

	cin >> nbr;
	while (nbr > 0) {
		tobepushed = 0;
		n = 0;
		cin >> n;
		if (n == 1) {
			cin >> tobepushed;
			stk.push(tobepushed);
		} else if (n == 2) {
			if (!stk.empty())
				stk.pop();
		} else if (n == 3) {
			if (stk.empty()) {
				cout << "Empty!\n";
			} else {
				cout << stk.top() << "\n";
			}
		}
		nbr--;
	}
	return (0);
}