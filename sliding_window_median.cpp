#include				<cstdint>
#include				<ios>
#include				<iostream>
#include				<vector>
#include				<algorithm>
#include				<map>
#include				<set>
#define _int			int32_t
#define int				long long
#define fastIO			(std::ios_base::sync_with_stdio(false), std::cin.tie(NULL), std::cout.tie(NULL));
#define f(s, n)			for(long long i = s; i < n; i++)	
#define w(s)			while(s--)
#define endl			"\n"

using namespace std;

void	ft_solve( void ) {

}

_int main( void ) {
	fastIO
	int	n, k; cin >> n >> k;

	vector<int>	v(n);
	for (auto& i : v) {
		cin >> i;
	}

	for (int i = 0; i <= n - k; i++) {
		multiset<int> s(v.begin() + i, v.begin() + i + k);
		auto it = s.begin();
		advance(it, ((k % 2 == 0) ? (k / 2) - 1 : (k / 2)));
		cout << *it;
		if (i + k != n)
			cout << ' ';
	}
}
