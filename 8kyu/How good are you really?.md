# DESCRIPTION
There was a test in your class and you passed it. Congratulations!
But you're an ambitious person. You want to know if you're better than the average student in your class.

You receive an array with your peers' test scores. Now calculate the average and compare your score!

Return True if you're better, else False!

Note:
Your points are not included in the array of your class's points. For calculating the average point you may add your point to the given array!

# My Solution
```c++
#include <vector>
#include<numeric>
bool betterThanAverage(std::vector<int> classPoints, int yourPoints) {
  // your code here
  return (std::accumulate(classPoints.begin(), classPoints.end(),0))/(classPoints.size()) < yourPoints;
}
```
# Alternative 1
```c++
#include <vector>

bool betterThanAverage(std::vector<int> classPoints, int yourPoints) {
  int total_score = 0;
  double avg;
  
  classPoints.push_back(yourPoints);
  std::for_each(classPoints.begin(), classPoints.end(), [&](int& n){total_score += n;});
  
  avg = total_score / classPoints.size();
  
  return (double)yourPoints > avg;
}
```
