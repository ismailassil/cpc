#include				<cstdint>
#include				<iostream>
#include				<iterator>
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

int		mex(vector<int> head) {
	int mex = 0;

	for (int &i : head) {
		if (mex == i) mex++;
	}
	return (mex);
}

_int main( void ) {
	fastIO
	int	test_cases, n; cin >> test_cases;
	
	w(test_cases) {
		n = 0; cin >> n;
		int first_mex = -1;
		map<int, int> v;
		vector<int> vv;
		for (int i = 0; i < n; i++) {
			int input; cin >> input;
			map<int, int>::iterator it = v.find(input);
			if (it != v.end()) v[input]++;
			else v.insert({input, 1});
			vv.push_back(input);
		}
		bool flag = false, ff = false;
		for (const auto& it : v) {
			int pair = it.second;
			if (flag == false && pair == 1) {
				flag = true;
			}
			else if (flag == true && pair == 1) {
				first_mex = it.first;
				ff = true;
				break ;
			}
		}
		sort(vv.begin(), vv.end());
		if (first_mex != -1)
			cout << min(first_mex, mex(vv)) << endl;
		else
			cout << mex(vv) << endl;
	}
}
