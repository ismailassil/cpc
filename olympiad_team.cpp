#include				<cstdint>
#include				<iostream>
#include				<vector>
#define _int			int32_t
#define int				long long
#define fastIO			(std::ios_base::sync_with_stdio(false), std::cin.tie(NULL), std::cout.tie(NULL));
#define f(s, n)			for(long long i = s; i < n; i++)	
#define w(s)			while(s--)
#define endl			'\n'

using namespace std;

_int main( void ) {
	fastIO
	int	n = 0, m = 0, p = 0, s = 0, index = 0; cin >> n;

	vector<int> pv, mv, sv;
	w(n) {
		int	input = 0; cin >> input;
		if (input == 1) p++, pv.push_back(index + 1);
		else if (input == 2) m++, mv.push_back(index + 1);
		else s++, sv.push_back(index + 1);
		index++;
	}
	if (!p || !m || !s)
		return (cout << 0 << '\n', 0);
	int ans = min(p, m);
	ans = min(ans, s);
	cout << ans << '\n';
	for ( int i = 0; i < ans; i++ ) {
		cout << pv[i] << ' ' << mv[i] << ' ' << sv[i] << endl;
	}
	return 0;
}
