# DESCRIPTION
Write a function that takes an array of strings as an argument and returns a sorted array containing the same strings, ordered from shortest to longest.

For example, if this array were passed as an argument:

["Telescopes", "Glasses", "Eyes", "Monocles"]

Your function would return the following array:

["Eyes", "Glasses", "Monocles", "Telescopes"]

All of the strings in the array passed to your function will be different lengths, so you will not have to decide how to order multiple strings of the same length.

# My Solution
```c++
class Kata
{
public:
    std::vector<std::string> sortByLength(std::vector<std::string> array)
    {
      for(int i =0;i<array.size(); i++){
        for(int j = i+1; j<array.size(); j++){
          if(array[j].size() < array[i].size()){
            std::string temp = array[i];
            array[i] = array[j];
            array[j] = temp;
          }
        }
      }
        return array;
    }
};
```
# Alternative 1
```c++
class Kata
{
public:
    std::vector<std::string> sortByLength(std::vector<std::string> array);
};

std::vector<std::string> Kata::sortByLength(std::vector<std::string> array)
{
    std::sort(array.begin(), array.end(), [](auto const & x, auto const & y) { return x.length() < y.length(); });
    return array;
}
```
