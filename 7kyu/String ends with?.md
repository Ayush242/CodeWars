# DESCRIPTION
Complete the solution so that it returns true if the first argument(string) passed in ends with the 2nd argument (also a string).

Examples:

solution('abc', 'bc') // returns true

solution('abc', 'd') // returns false

# My Solution
```c++
#include <string>
bool solution(std::string const &str, std::string const &ending) {
  if(ending.size() > str.size()) return false;
  int index = str.size() - ending.size();
  int k=0;
  for(int i = index; i<str.size(); i++){
    if(str[i] != ending[k++]){
      return false;
    }
  }
    return true;
}
```
# Alternative 1
```c++
bool solution(std::string const &str, std::string const &ending) {
    const int slen = str.length();
    const int eLen = ending.length();
    
    if (slen < eLen) {
        return false;
    }
    
    for (int i = 1; i <= eLen; i++) {
        if (str[slen - i] != ending[eLen - i]) {
            return false;
        }
    }
    return true;
}
```
# Alternative 2
```c++
using namespace std;
bool solution(std::string const &str, std::string const &ending) {
     return equal(ending.begin(),ending.end(),str.end() - ending.size()); 
}
```
