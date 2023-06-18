# DESCRIPTION

Complete the square sum function so that it squares each number passed into it and then sums the results together.

For example, for [1, 2, 2] it should return 9 because
1^2^+2^2^+2^2^=9.

```c++
#include <vector>

int square_sum(const std::vector<int>& numbers)
{
 int sum = 0;
 for (int x : numbers) {
     sum += x * x;
 }
 return sum;
}
```

# Alternative

```c++
#include <numeric>
#include <vector>

int square_sum(const std::vector<int>& numbers)
{
    return std::accumulate(numbers.begin(), numbers.end(), 0, [](int a, int b) {return a + b * b;});
}
```
