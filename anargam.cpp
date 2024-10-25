#include				<cstdint>
#include				<ios>
#include				<iostream>
#include				<algorithm>
#include				<vector>
#include				<map>
#include				<set>
#define _int			int32_t
#define int				long long
#define fastIO			(ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL));
#define f(s, n)			for(long long i = s; i < n; i++)	
#define w(s)			while(s--)
#define endl			"\n"

using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char, int> mp1;
        map<char, int> mp2;

        if (s.length() != t.length())
            return (false);
        for (int i = 0; i < s.length(); i++) {
            mp1[s[i]]++;
            mp2[t[i]]++;
        }
        return (mp1 == mp2);
    }
};

void	ft_solve( void ) {

}

_int main( int32_t ac, char **av ) {
    Solution solution;
    
    string s1 = "a";
    string t1 = "aa";
    cout << "Are \"" << s1 << "\" and \"" << t1 << "\" anagrams? "
              << (solution.isAnagram(s1, t1) ? "Yes" : "No") << endl;

    string s2 = "hello";
    string t2 = "bello";
    cout << "Are \"" << s2 << "\" and \"" << t2 << "\" anagrams? "
              << (solution.isAnagram(s2, t2) ? "Yes" : "No") << endl;

    string s3 = "abcd";
    string t3 = "dcba";
    cout << "Are \"" << s3 << "\" and \"" << t3 << "\" anagrams? "
              << (solution.isAnagram(s3, t3) ? "Yes" : "No") << endl;

    return 0;
}
