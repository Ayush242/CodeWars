# DESCRIPTION
Write a function which calculates the average of the numbers in a given list.

Note: Empty arrays should return 0.

# My Solution
```c++
#include <vector>
double calcAverage(const std::vector<int>& values)
{
  // your code
  double sum = 0;
  for(int i : values)
  {
    sum += i;
  }
  return sum / values.size();  
}
```
# Alternative 1
```c++
#include <vector>
#include <numeric>
using namespace std; 

double calcAverage(const vector<int>& values){
  return accumulate(values.begin(),values.end(), 0.0) / values.size();
}
```
