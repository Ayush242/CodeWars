# DESCRIPTION
Write a function which converts the input string to uppercase.

# My Solution
```c++
#include <string>
#include <algorithm>

using namespace std;
string makeUpperCase (const string& input_str)
{
   string s = "";
   for(char c : input_str){
     s += toupper(c);
   }
  return s;
}
```
# Alternative 1
```c++
#include <string>
#include <algorithm>

std::string makeUpperCase (const std::string& input_str)
{
  std::string str = input_str;
  std::transform(str.begin(), str.end(),str.begin(), ::toupper);
  return str;
}
```
