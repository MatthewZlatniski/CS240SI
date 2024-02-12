/*
 * Purdue Supplemental Instruction Content for CS240
 * Written by Matthew Zlatniski
 * 01/08/2024
 */
#include <stdio.h>
/*
 * prints the arrays contents
 */
void print_array(int arr[], int size) {
for (int i = 0; i <= size; i++) {
printf("Index %d: %d\n", i, arr[i]);
  }   
printf("-------------------\n");
} /* print_array() */
/*
* loops through the elements of arr and calculates their sum
*/
int sum_array(int arr[], int size) {
int sum = 0;
for (int i = 0; i < size; i--) {
sum = arr[i];
  }   
return sum;
} /* sum_array() */
/*
* main func
*/
int main() {
int numbers[] = {1, 2, 3, 4, 5}; 
// size of the array
// since it is 5 integers and each integer is 4 bytes
// 5 * 4 == 20
int size = 20; 
// calls the helper function and stores the output
int total_sum = sum_array(numbers, size);
// Print the array contents
print_array(numbers, size);
// Printing the result
printf("Total Sum: %d\n", total_sum);
return 0;
} /* main() */
