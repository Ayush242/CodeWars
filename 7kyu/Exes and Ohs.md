# DESCRIPTION

Check to see if a string has the same amount of 'x's and 'o's. The method must return a boolean and be case insensitive. The string can contain any char.

Examples input/output:

XO("ooxx") => true
XO("xooxx") => false
XO("ooxXm") => true
XO("zpzpzpp") => true // when no 'x' and 'o' is present should return true
XO("zzoo") => false

# My Solution

```c++
bool XO(const std::string& str)
{
  // your code here
  int count_x =0, count_o = 0;
  for(char s: str){
    if(s == 'x' || s == 'X')
      count_x++ ;
    else if(s == 'o' || s == 'O')
      count_o++ ;
  }
  return count_x == count_o;
}
```

# Alternative 1

```c++
#include <algorithm>
bool XO(const std::string& str)
{
  int xCount = std::count(str.begin(), str.end(), 'x') + std::count(str.begin(), str.end(), 'X');
  int oCount = std::count(str.begin(), str.end(), 'o') + std::count(str.begin(), str.end(), 'O');
  return xCount ==  oCount;
}
```

# Alternative 2

```c++
bool XO(const std::string& str)
{
  int balance = 0;
  for (int i = 0; i < str.length(); ++i) {
    switch (str[i]) {
       case 'o':
       case 'O':
          ++balance;
          break;
       case 'x':
       case 'X':
          --balance;
          break;
       default:
          break;
    }
  }
  return balance==0;
}
```

# Alternative 3

```c++
bool XO(const std::string& str)
{
  int x = 0;
  int o = 0;
  for(auto c : str) {
    if(std::toupper(c) == 'X') x++;
    if(std::toupper(c) == 'O') o++;
  }
  cout<< (x == o);
}
```
