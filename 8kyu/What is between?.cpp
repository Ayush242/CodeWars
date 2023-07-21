// Complete the function that takes two integers (a, b, where a < b) and return an array of all integers between the input parameters, including them.
// For example:
// a = 1
// b = 4
// --> [1, 2, 3, 4]

#include <vector>
std::vector<int> between(int start, int end) {
  // your code here
  int diff = end - start + 1;
  std::vector<int> v;
  while(diff--){
    v.push_back(start++);
  }
  return v;
}  

// Alternative Solution
#include <vector>
#include <numeric>

std::vector<int> between(int start, int end) {
  std::vector<int> v(end-start+1);
  std::iota(v.begin(),v.end(), start);
  return v;
}  
