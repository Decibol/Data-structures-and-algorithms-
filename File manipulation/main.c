#include <stdio.h>
#include <ctype.h>
int main() {
    
  int num_words_10040 = 0;
  int num_characters_10040 = 0;

  //Declaring a file pointer
  FILE *fptr_10040;

  // Get the file name from the user.
  char filename_10040[20];
  printf("Enter the file name to be opened: ");
  scanf("%s", filename_10040);

  // Open the file in read mode.
  fptr_10040 = fopen(filename_10040, "r");

  // Check if the file could be opened.
  if (fptr_10040 == NULL) {
    printf("Error opening file.\n");
    return 1;
  }

  // Read a character from the file.
  char ch_10040;
  while ((ch_10040 = fgetc(fptr_10040)) != EOF) {
    // Increment the number of characters.
    num_characters_10040++;

    // If the character is a whitespace character, increment the number of words.
    if (isspace(ch_10040)) {
      num_words_10040++;
    }
  }

  // Close the file.
  fclose(fptr_10040);

  // Print the results.
  printf("The number of words in the file %s are: %d\n", filename_10040, num_words_10040);
  printf("The number of characters in the file %s are: %d\n", filename_10040, num_characters_10040);

  return 0;
}