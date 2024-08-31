#include				<cstdint>
#include				<ios>
#include				<iostream>
#define _int			int32_t
#define int				long long
#define fastIO			(std::ios_base::sync_with_stdio(false), std::cin.tie(NULL));
#define f(s, n)			for(long long i = s; i < n; i++)	

using namespace std;

_int main ( void ) {
	fastIO
	int		count = 1, prev_count = 0;
	char	c;

	string	s; cin >> s;
	c = s[0];
	for (int i = 0; i < s.size() - 1; i++) {
		if (c == s[i + 1]) {
			count++;
		}
		else {
			c = s[i + 1];
			count = 1;
		}
		if (count > prev_count)
			prev_count = count;
	}
	if (s.size() == 1)
		prev_count = 1;
	cout << prev_count << "\n";
}

