#include <iostream>

using namespace std;

int main()
{
	int n = 0;
	cin >> n;
	int prev = 0;
	long long mov = 0;
	while (n--) {
		long long a = 0;
		cin >> a;
		if (prev > a)
			mov += (prev - a);
		else
			prev = a;
	}
	cout << mov;
	return 0;
}
