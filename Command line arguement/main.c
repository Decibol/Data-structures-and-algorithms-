//Program for reversing a string
#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
  // Check if a string was provided as a command line argument.
  if (argc != 2) {
    printf("Usage: %s <string>\n", argv[0]);
    return 1;
  }

  // Get the string from the command line argument.
  char *str_10040 = argv[1];

  // Reverse the string.
  int i_10040, j_10040;
  char temp_10040;
  for (i_10040 = 0, j_10040 = strlen(str_10040) - 1; i_10040 < j_10040; i_10040++, j_10040--) {
    temp_10040 = str_10040[i_10040];
    str_10040[i_10040] = str_10040[j_10040];
    str_10040[j_10040] = temp_10040;
  }

  // Print the reversed string.
  printf("%s\n", str_10040);

  return 0;
}