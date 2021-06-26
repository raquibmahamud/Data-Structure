#include <stdio.h>

int main() {
  int arr[100];

  printf("Enter integers number: \n");

  // taking input and storing it in an array
  for(int i = 0; i < 100; ++i) {
     scanf("%d", &arr[i]);
     if(arr[i]==0)
        break;
  }

  printf("Displaying integers: \n");

  // printing elements of an array
  for(int i = 0; i < arr[i]; ++i) {
     printf("%d\n", arr[i]);
  }
  return 0;
}
