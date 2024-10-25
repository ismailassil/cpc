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

class Solution {
public:
	vector<int>	twoSum(vector<int>& nums, int target) {
		if (nums.empty())
			return (vector<int>());
		vector<int>::iterator left = nums.begin();
		vector<int>::iterator right = nums.begin() + 1;
		while (left < right && right != nums.end() && left != nums.end()) {
			cout << "left: " << *left << " right: " << *right << endl; 
			if (*left + *right == target) {
				return vector<int>{left - nums.begin(), right - nums.begin()};
			}
			else if (*left + *right > target) {
				left++;
			} else {
				right++;
			}
		}
		return (vector<int>());
	}
};

void	ft_solve( void ) {

}

void printResult(const vector<int>& result) {
	if (!result.empty()) {
		cout << "Indices: " << result[0] << ", " << result[1] << endl;
	} else {
		cout << "No solution found." << endl;
	}
}

_int main( void ) {
	fastIO
	Solution solution;

	// // Test Case 1
	// vector<int> nums1 = {2, 7, 11, 15};
	// int target1 = 9;
	// cout << "Test Case 1: ";
	// printResult(solution.twoSum(nums1, target1));

	// // Test Case 2
	// vector<int> nums2 = {3, 2, 4};
	// int target2 = 6;
	// cout << "Test Case 2: ";
	// printResult(solution.twoSum(nums2, target2));

	// // Test Case 3
	// vector<int> nums3 = {3, 3, 4, 7, 8};
	// int target3 = 10;
	// cout << "Test Case 3: ";
	// printResult(solution.twoSum(nums3, target3));

	// // Test Case 4
	// vector<int> nums4 = {1, 2, 3, 4, 5, 6, 7};
	// int target4 = 13;
	// cout << "Test Case 4: ";
	// printResult(solution.twoSum(nums4, target4));

	// // Test Case 5
	// vector<int> nums5 = {-1, 2, 1, -4, 5, 6};
	// int target5 = 1;
	// cout << "Test Case 5: ";
	// printResult(solution.twoSum(nums5, target5));

	// Test Case 6
	vector<int> nums6 = {2, 5, 5, 11};
	int target6 = 10;
	cout << "Test Case 6: ";
	printResult(solution.twoSum(nums6, target6));

	return 0;
}