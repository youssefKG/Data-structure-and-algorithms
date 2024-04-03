#include "map"
#include <stdio.h>
#include <vector>
using namespace std;
class Solution {
public:
  vector<int> topKeyFrequent(vector<int> &nums, int k) {
    vector<int> result;
    map<int, int> count;
    for (int i; i < nums.size(); i++) {
      if (count.find(nums[i]) == count.end())
        count[nums[i]] = count[nums[i]]++;
      else
        count[nums[i]] = 1;
    }
    for (int i = 0; i < k; i++) {
    }
    return result;
  }
};

