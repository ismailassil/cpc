#include				<cstdint> // IWYU pragma: keep
#include				<ios> // IWYU pragma: keep
#include				<iostream> // IWYU pragma: keep
#include				<algorithm> // IWYU pragma: keep
#include				<vector> // IWYU pragma: keep
#include				<map> // IWYU pragma: keep
#include				<set> // IWYU pragma: keep
#define _int			int32_t
#define int				long long
#define fastIO			(std::ios_base::sync_with_stdio(false), std::cin.tie(NULL), std::cout.tie(NULL));
#define f(s, n)			for(long long i = s; i < n; i++)	
#define w(s)			while(s--)
#define endl			"\n"

using namespace std;

void	ft_solve( void ) {

}

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
		if (nums.empty())
			return (false);
        sort(nums.begin(), nums.end());
        for (size_t i = 0; i < nums.size() - 1; i++) {
            if (nums[i] == nums[i + 1])
                return (true);
        }
        return (false);
    }
};

_int main() {
	Solution solution;

	// Test case 1: No duplicates
	vector<int> nums1 = {1, 2, 3, 4, 5};
	cout << "Test Case 1: " << (solution.containsDuplicate(nums1) ? "Contains Duplicate" : "No Duplicate") << endl;

	// Test case 2: Contains duplicates
	vector<int> nums2 = {1, 2, 3, 4, 4};
	cout << "Test Case 2: " << (solution.containsDuplicate(nums2) ? "Contains Duplicate" : "No Duplicate") << endl;

	// Test case 3: All elements are the same
	vector<int> nums3 = {5, 5, 5, 5, 5};
	cout << "Test Case 3: " << (solution.containsDuplicate(nums3) ? "Contains Duplicate" : "No Duplicate") << endl;

	// Test case 4: Empty vector
	vector<int> nums4 = {};
	cout << "Test Case 4: " << (solution.containsDuplicate(nums4) ? "Contains Duplicate" : "No Duplicate") << endl;

	return 0;
}