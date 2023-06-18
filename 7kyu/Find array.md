# DESCRIPTION

You are given two arrays arr1 and arr2, where arr2 always contains integers.

Write a function such that:

For arr1 = ['a', 'a', 'a', 'a', 'a'], arr2 = [2, 4] the function returns ['a', 'a']

For arr1 = [0, 1, 5, 2, 1, 8, 9, 1, 5], arr2 = [1, 4, 7] the function returns [1, 1, 1]

For arr1 = [0, 3, 4], arr2 = [2, 6] the function returns [4]

For arr1=["a","b","c","d"] , arr2=[2,2,2], the function returns ["c","c","c"]

For arr1=["a","b","c","d"], arr2=[3,0,2] the function returns ["d","a","c"]

Note that when an element inside arr2 is greater than the index of the last element of arr1 no element of arr1 should be added to the resulting array. If either arr1 or arr2 is empty, you should return an empty arr (empty list in python, empty vector in c++). Note for c++ use std::vector arr1, arr2.

# My Solution

```c++
template <typename T>
vector<T> find_array(vector<T> arr1, vector<int> arr2)
{
  vector<T> res;
  if(arr1.empty() || arr2.empty()){
    return res;
  }
  for(int i =0; i < arr2.size() ; i++){
    if(arr2[i]<arr1.size()){
      res.push_back(arr1[arr2[i]]);
    }
  }

```

# Alternative 1

```c++
#include <vector>

template <typename T>
std::vector<T> find_array(const std::vector<T>& arr1, const std::vector<int>& arr2)
{
  std::vector<T> res;
  for (int i : arr2) {
    if (i < (int)arr1.size())  //(int) coz .size() type is unsigned long
        res.push_back(arr1[i]);
  }
  return res;
}
```
