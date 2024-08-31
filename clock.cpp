#include				<cstdint>
#include				<ios>
#include				<iostream>
#include				<string>
#define _int			int32_t
#define int				long long
#define fastIO			(std::ios_base::sync_with_stdio(false), std::cin.tie(NULL), std::cout.tie(NULL));
#define f(s, n)			for(long long i = s; i < n; i++)
#define w(s)			while(s--)

using namespace std;

bool	is_palindrome(int h, int m) {
	if ((int)(h / 10) == (int)(m % 10) && (int)(h % 10) == (int)(m / 10))
		return true;
	return false;
}

_int main( void ) {
	fastIO
	int	test_cases; cin >> test_cases;
	w(test_cases) {
		int		time, h = 0, m = 0, palindrome = 0;
		string	s;

		cin >> s >> time;
		h = atoi(s.substr(0, 2).c_str());
		m = atoi(s.substr(3, 4).c_str());

		int s_h = h;
		int s_m = m;
		while (1) {
			if (is_palindrome(h, m))
				palindrome++;
			if (time > 60) {
				int	temp_h = time / 60;
				int	temp_m = time % 60;
				m += temp_m;
				if (m >= 60) {
					h += 1, m -= 60;
				}
				if (h >= 24)
					h -= 24;
				h += temp_h;
				if (h >= 24)
					h -= 24;
			} else {
				m += time;
				if (m >= 60) {
					h += 1;
					m -= 60;
					if (h >= 24)
						h -= 24;
				}
			}
			if (s_h == h && s_m == m)
				break ;
		}
		cout << palindrome << '\n';
	}
}
