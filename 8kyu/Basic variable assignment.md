# DESCRIPTION

This code should store "codewa.rs" as a variable called name but it's not working. Can you figure out why?

# My Solution

```c++
#include <string>
#include<iostream>
int main(){
    std::string a = "code";
    std::string b = "wa.rs";
    std::string name = a + b;
    std::cout << (name == "codewa.rs");
}
```

# Alternative

```c++
std::string a {"code"};
std::string b {"wa.rs"};
std::string name {a + b};
```
