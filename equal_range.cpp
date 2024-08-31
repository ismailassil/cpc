#include <cfloat>
#include <csetjmp>
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

int	lowerBound(vector<int> &v, int input) {
	int	left = 0, right = v.size() - 1, mid = 0;

	while (left <= right) {
		mid = left + (right - left) / 2;
		if (v[mid] >= input) right = mid - 1;
		else left = mid + 1;
	}
	return (left);
}

int	upperBound(vector<int> &v, int input) {
	return (lowerBound(v, input + 1));
}

_int main( void ) {
	fastIO
	int size; cin >> size;
	vector<int> v(size);
	for (auto& i : v) {
		cin >> i;
	}

	int	num; cin >> num;
	w(num) {
		int input; cin >> input;
		cout << lowerBound(v, input) << " " << upperBound(v, input) << endl;
	}
}
