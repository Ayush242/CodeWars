# DESCRIPTION
Given a string of digits, you should replace any digit below 5 with '0' and any digit 5 and above with '1'. Return the resulting string.

Note: input will never be an empty string

# My Solution
```c++
#include <string>

std::string fakeBin(std::string str){
  //your code here
  std::string newStr;
  for( char s : str){
    newStr += (s <'5') ? '0': '1';
  }
  return newStr;
}
```
# Alternative 1
```c++
#include <string>

std::string fakeBin(std::string str){
  for (auto &s : str)
	{
		s = s < '5'?'0':'1';
	}
  return str;
}
```
# Alternative 2
```c++
#include <string>

std::string fakeBin(std::string str){
  std::transform(str.begin(), str.end(), str.begin(), [](auto ch) {return ch < '5' ? '0' : '1';});
  return str;
}
```
