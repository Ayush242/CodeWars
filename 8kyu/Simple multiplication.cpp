// This kata is about multiplying a given number by eight if it is an even number and by nine otherwise.

int simpleMultiplication(int a){
  return a & 1 ? a*9 : a* 8;
}

// Alternative Solution 1
int simpleMultiplication(int a){
    return a % 2 ? 9*a : 8*a;
}

// Alternative Solution 2
int simpleMultiplication(int a)
{
    return a * ( 8 + ( a & 1 ) );
}

// Alternative Solution 3
int simpleMultiplication( int a ) {
  return a & 1 ? 9 * a : a << 3;
}
