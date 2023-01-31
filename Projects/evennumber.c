#include <stdio.h>

int main() {
  int n, i;
  printf("Enter a positive even integer: ");
  scanf("%d", &n);
  
  // input validation
  if (n <= 0 || n % 2 != 0) {
    printf("Invalid input!\n");
    //return 1;
  }
  
  for (i = 1; i <= n; i++) {
    printf("%d, %d, ", i, n - i + 1);
  }
  
  return 0;
}
