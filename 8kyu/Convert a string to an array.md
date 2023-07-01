# DESCRIPTION
Write a function to split a string and convert it into an array of words.

Examples (Input ==> Output):
"Robin Singh" ==> ["Robin", "Singh"]

"I love arrays they are my favorite" ==> ["I", "love", "arrays", "they", "are", "my", "favorite"]
# My Solution
```c++
#include <vector>
#include <string>
#include <sstream>
using namespace std;
std::vector<string> string_to_array(const string& s) {
  
    vector<string> v;
    string word;
    stringstream ss(s);
    while(!ss.eof()){ // or  while(getline(ss,word,' '))
      getline(ss,word,' ');
      v.push_back(word);
    }
    return v; 
}
```
# Alternative 1
```c++
#include <vector>
#include <string>

std::vector<std::string> string_to_array(const std::string& s) {
  std::string cur = "";
  std::vector<std::string> v;
  for (auto el: s) {
    if ( el != ' ') cur += el;
    else {
      v.push_back(cur);
      cur = "";
    }
  }
  v.push_back(cur);
  return v;
}
```
