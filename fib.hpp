#include <iostream>

int fibRecur(int n) {
  if (n == 1 || n == 2) {return 1;}
  return fibRecur(n-1) + fibRecur(n-2);
}

int64_t fibArray(int n) {
  if (n == 1 || n == 2) {return 1;}
  int64_t fibs[n];
  fibs[0] = 1;
  fibs[1] = 1;
  for (int i=2; i<n; i++) {
    fibs[i] = fibs[i-1] + fibs[i-2];
  }
  return fibs[n-1];
}

int64_t fibTwo(int n) {
  if (n == 1 || n == 2) {return 1;}
  int64_t fibLower = 1;
  int64_t fibHigher = 1;
  int64_t nextHigherfib;
  for (int i=2; i<n; i++) {
    nextHigherfib = fibLower + fibHigher;
    fibLower = fibHigher;
    fibHigher = nextHigherfib;
  }
  return fibHigher;
}

void swap64(int64_t &a, int64_t &b) {
  int64_t temp = a;
  a = b;
  b = temp;
}

int64_t fibTwoSwap(int n) {
  if (n == 1 || n == 2) {return 1;}
  int64_t fibLower = 1;
  int64_t fibHigher = 1;
  for (int i=2; i<n; i++) {
    swap64(fibLower, fibHigher);
    fibHigher = fibHigher + fibLower;
  }
  return fibHigher;
}