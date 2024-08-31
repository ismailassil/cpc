#include				<cstdint>
#include				<ios>
#include				<iostream>
#include				<vector>
#include				<map>
#define _int			int32_t
#define int				long long
#define fastIO			(std::ios_base::sync_with_stdio(false), std::cin.tie(NULL), std::cout.tie(NULL));
#define f(s, n)			for(long long i = s; i < n; i++)	
#define w(s)			while(s--)
#define endl			"\n"

using namespace std;

_int main( void ) {
	fastIO
	int	size, target; cin >> size >> target;

	vector<int> v(size);
	for (auto& i : v) {
		cin >> i;	
	}
	int ans = 0, sum = v[0], left = 0, right = 0;
	for ( ; left < size && right < size; ) {
		if (sum > target)
			sum -= v[left++];
		if (sum < target)
			sum += v[++right];
		if (sum == target)
			ans++, sum -= v[left], left++;
	}
	cout << ans << endl;
}	

