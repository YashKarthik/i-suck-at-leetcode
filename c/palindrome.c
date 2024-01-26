#include <stdio.h>
#include <stdbool.h>

int num_of_digits(int d) {
  int n = 1;
  int div = 10;

  while ((d / div) != 0) {
    div *= 10;
    n++;
  }

  return n;
}

int pow10(int n) {
  int x = 10;
  for (int i = 1; i < n; i++) {
    x *= 10;
  }
  return x;
}

int palindrome(int d, int len) {
  if (d < 0) return -1;

  for (int i = 0; i < len / 2; i++) {
    int L = (d / pow10(len - 1 - i)) % 10;
    int R = (d % pow10(1 + i)) / (i == 0 ? 1 : pow10(i));

    printf("L: %i, R: %i\n", L, R);

    if (L != R) return -1;
  }

  return 0;
}

bool is_palindrome(int x) {
  if (x < 0) return false;
  if (x != 0 && x % 10 == 0) return false;

  int cmp = 0;
  while (cmp < x) {
    cmp = cmp*10 + x % 10; // extract from x, feed into cpm;
    x /= 10;

    printf("x: %i, cmp: %i\n", x, cmp);
  }

  return (x == cmp || x == (cmp / 10));
}

int main() {
  printf("%i\n", is_palindrome(12));
  // int count = num_of_digits(d);

  // if(palindrome(d, count) == -1) {
  //   printf("Not a palindrome.\n");
  //   return 0;
  // }

  //printf("Palindrome.\n");
  return 0;
}
