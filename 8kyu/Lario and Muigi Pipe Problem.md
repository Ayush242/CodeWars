# DESCRIPTION
Issue
Looks like some hoodlum plumber and his brother has been running around and damaging your stages again.

The pipes connecting your level's stages together need to be fixed before you receive any more complaints.

Pipes list is correct when each pipe after the first index is greater (+1) than the previous one, and that there is no duplicates.

Task
Given the a list of numbers, return a fixed list so that the values increment by 1 for each index from the minimum value up to the maximum value (both included).

Example
Input:  1,3,5,6,7,8 Output: 1,2,3,4,5,6,7,8

# My Solution
```c++
#include <vector>
using namespace std;
std::vector<int> pipe_fix(const std::vector<int>& nums) {
  // your code here
  vector<int> v;
  int maxNum = *max_element(nums.begin(),nums.end());
  int minNum = *min_element(nums.begin(),nums.end());
  for(long long int i = minNum; i<= maxNum;i++){
    v.push_back(i);
  }
  return v;
}
```
