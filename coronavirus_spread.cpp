#include				<cstdint>
#include				<ios>
#include				<iostream>
#include				<vector>
#include				<algorithm>
#include				<map>
#define _int			int32_t
#define int				long long
#define fastIO			(std::ios_base::sync_with_stdio(false), std::cin.tie(NULL), std::cout.tie(NULL));
#define f(s, n)			for(long long i = s; i < n; i++)	
#define w(s)			while(s--)
#define endl			"\n"

using namespace std;

void	ft_solve( void ) {
	int	n; cin >> n;
	vector<int> v(n);
	for (auto& i : v) {
		cin >> i;	
	}

	int count = 1, max_ans = 1, min_ans = n;
	for (int left = 0; left < (n - 1); left++) {

		int dist = v[left + 1] - v[left];

		if (dist <= 2) {
			count++;
		}
		else {
			max_ans = max(max_ans, count);
			min_ans = min(min_ans, count);
			count = 1;
		}
	}
	max_ans = max(max_ans, count);
	min_ans = min(min_ans, count);
	cout << min_ans << " " << max_ans << endl;
}

_int main( void ) {
	fastIO
	int	test_cases; cin >> test_cases;

	w(test_cases) {
		ft_solve();
	}	
}
