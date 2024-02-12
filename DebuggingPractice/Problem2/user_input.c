/*
 * Purdue Supplemental Instruction Content for CS240
 * Written by Matthew Zlatniski
 * 01/10/2024
 */

#include <stdio.h>
#include <string.h>

/*
 * the following code will take user input to enter a loop
 * it will then loop everytime the user inputs "yes"
 * if the user inputs "no" the code will complete
 * any other any is invalid
 */
void main(void) {
  char input[10];

  printf("Should I loop? (answer \"yes\" or \"no\")\n");
  scanf("%s", &input);

  while (1) {
    while (!strcmp(input, "yes") && !strcmp(input, "no")) {
      printf("Invalid Input. Try again.\n");
      scanf("%s", &input);
    }   
    if (strcmp(input, "no")) {
      break;
    }   
    printf("Should I loop again? (answer \"yes\" or \"no\")\n");
    scanf("%s", &input);
  }
}
