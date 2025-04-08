#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>
#include <map>
#include <unordered_map>
#include <set>
#include <utility>
#include <queue>
#include <stack>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cassert>
#include <cctype>

using namespace std;

class Solution
{
public:
    char findTheDifference(string s, string t)
    {
        int n = s.size();
        int m = t.size();
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            ans ^= s[i];
        }
        for (int i = 0; i < m; i++)
        {
            ans ^= t[i];
        }
        return ans;
    }
};

int main()
{
    Solution ob;
    cout << ob.findTheDifference("abcd", "abcde") << endl;
    return 0;
}
