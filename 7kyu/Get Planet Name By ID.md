# DESCRIPTION

The function is not returning the correct values. Can you figure out why?

Example (Input --> Output ):

3 --> "Earth"

# My Solution

```c++
std::string get_planet_name(int id)
{
  std::string planets[] = {"","Mercury","Venus","Earth","Mars","Jupiter","Saturn","Uranus","Neptune"};
  return planets[id];
}
```

# Alternative 1

```c++
std::string get_planet_name(int id)
{
  const std::map<int, std::string> Planets = {
      { 1, "Mercury"},
      { 2, "Venus"  },
      { 3, "Earth"  },
      { 4, "Mars"   },
      { 5, "Jupiter"},
      { 6, "Saturn" },
      { 7, "Uranus" },
      { 8, "Neptune"},
    };

  return Planets.at(id);
}
```

# Alternative 2

```c++
std::string get_planet_name(int id)
{
  return (id==1)?"Mercury":(id==2)?"Venus":(id==3)?"Earth":(id==4)?"Mars":(id==5)?"Jupiter":(id==6)?"Saturn":(id==7)?"Uranus":(id==8)?"Neptune":"Pluto";
}
```
