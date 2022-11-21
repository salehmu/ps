#include <algorithm>
#include <array>
#include <climits>
#include <cmath>
#include <deque>
#include <iomanip>
#include <iostream>
#include <iterator>
#include <list>
#include <map>
#include <numeric>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <tuple>
#include <unordered_map>
#include <unordered_set>
#include <vector>
#define begend(v) ((v).begin()), ((v).end())
#define sz(v) ((int)((v).size()))
using namespace std;
typedef pair<int, int> pi;
priority_queue<pi, vector<pi>, greater<pi>> pq;

class Solution {
public:
  int majorityElement(vector<int> &nums) {
    map<int, int> mp;
    int mi(-1), m(-1);
    for (auto &i : nums) {
      mp[i]++;
      if (mp[i] > m) {
        mi = i, m = mp[i];
      }
    }
    return mi;
  }
};
