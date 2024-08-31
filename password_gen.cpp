#include <ios>
#include <iostream>

using namespace std;

int main( void ) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int len, c;
	cin >> len >> c;

	string a, ans;
	int i = 0, j = 0;
	while (len--) {
		if (c > 0) {
			c--;
			a += ('a' + i++);
			ans = a;
		}
		else if (c == 0 && len >= 0)
		{
			ans += a[j++];
			if (j == (int)a.size())
				j = 0;
		}
	}
	cout << ans;
}
