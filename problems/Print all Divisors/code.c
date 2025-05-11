#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int* divisors(int n, int* count) {
  int capacity = 4;
  int size = 0;
  int* arr = malloc(capacity * sizeof(int));

  for (int i = 1; i * i <= n; i++) {
    if (n % i == 0) {
      if (size == capacity) {
        capacity *= 2;
        int* temp = realloc(arr, capacity * sizeof(int));
        if (!temp) {
          free(arr);
          return NULL;
        }
        arr = temp;
      }
      arr[size++] = i;
      if(i != n / i) {
          arr[size++] = n / i;
      }
    }
    *count = size;
  }
  
  return arr;
}

int main() {
  int count = 0;
  int* result = divisors(36, &count);
  int size = sizeof(result) / sizeof(result[0]);
  if (result) {
    for (int i = 0; i < count; i++) {
      printf("%d", result[i]);
      printf("\n");
    }
    free(result);
  }
  return 0;
}