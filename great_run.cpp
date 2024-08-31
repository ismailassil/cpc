#include				<cstdint>
#include				<ios>
#include				<numeric>
#include				<vector>
#include				<iostream>
#include				<algorithm>
#define _int			int32_t
#define int				long long
#define fastIO			(std::ios_base::sync_with_stdio(false), std::cin.tie(NULL), std::cout.tie(NULL));
#define f(s, n)			for(long long i = s; i < n; i++)	
#define w(s)			while(s--)
#define endl			"\n"

using namespace std;

_int main( void ) {
	fastIO
	int test_cases; cin >> test_cases;

	w(test_cases) {
		int	long_run = 0, speed_run = 0; cin >> long_run >> speed_run;

		vector<int> arr(long_run);
		f(0, long_run) cin >> arr[i];
		int ans = 0;
		f(0, long_run - speed_run + 1) {
			int sum = accumulate(arr.begin() + i, arr.begin() + (i + speed_run), 0);
			// cout << sum << endl;
			if (sum > ans) ans = sum;
		}
		cout << ans << endl; 
	}
}
