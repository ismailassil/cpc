#include				<cstdint>
#include				<ios>
#include				<iostream>
#include				<vector>
#include				<map>
#include				<algorithm>
#define _int			int32_t
#define int				long long
#define fastIO			(std::ios_base::sync_with_stdio(false), std::cin.tie(NULL), std::cout.tie(NULL));
#define f(s, n)			for(long long i = s; i < n; i++)	
#define w(s)			while(s--)
#define endl			"\n"

using namespace std;

bool	my_binary_search(vector<int>& v, int num) {
	int		left = 0, right = v.size() - 1;

	while (left <= right) {
		int mid = (right + left) / 2;
		if (v[mid] == num)
			return (true);
		if (v[mid] > num)
			right = mid - 1;
		else if (v[mid] < num)
			left = mid + 1;
	}
	return (false);
}

_int main( void ) {
	fastIO
	int	size; cin >> size;

	vector<int>	v(size);
	for (auto& i : v) {
		cin >> i;
	}
	int query; cin >> query;
	w(query) {
		int num; cin >> num;
		cout << my_binary_search(v, num) << endl;
	}
}
