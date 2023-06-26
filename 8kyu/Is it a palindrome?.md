# DESCRIPTION
Write a function that checks if a given string (case insensitive) is a palindrome. A palindrome is a word, number, phrase, or other sequence of symbols that reads the same backwards as forwards, such as madam or racecar, the date and time 12/21/33 12:21, and the sentence: "A man, a plan, a canal – Panama".

# My Solution
```c++
#include <bits/stdc++.h>

using namespace std;
bool isPalindrom (const string& str)
{
  int n = str.size();
  for(int i=0;i<n/2;i++){  
    
    if(tolower(str[i])!=tolower(str[n-i-1]))
    return false;
  }
  return true;
}
```
# Alternative 1
```c++
#include <string>
#include <algorithm>

bool isPalindrom (const std::string& str)
{
  std::string s = str;
	std::transform(s.cbegin(), s.cend(), s.begin(), ::tolower);
  return s == std::string(s.rbegin(), s.rend());
}
```
