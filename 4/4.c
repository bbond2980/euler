/*
A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.

Find the largest palindrome made from the product of two 3-digit numbers.
*/

#include <stdio.h>
#define LIMIT 999

int main(){
  int largest = 0;
  //int array_size = sizeof(numbers) / sizeof(int);

  /*
  for(int i = 0; i < array_size; i++){
    numbers[i] = i;
    printf("%d\n",numbers[i]);
  }
  */


  
  for(int i = 1; i < LIMIT; i++){
    for(int j =1; j < LIMIT; j++){
      int product, remainder, reversed = 0;
      product = i*j;
      int original = product;
      
      while (product != 0) {
        remainder = product % 10;
        reversed = (reversed * 10) + remainder;
        product /= 10;
      }
      
       printf("Reversed: %d \n", reversed);
      
      if(original == reversed){
	if(reversed > largest){
	  largest = reversed;
	  printf("----------PALINDROME FOUND!----------\n");
	}
      }
    }
  }
  printf("Largest palindrome: %d\n", largest);
	
  // printf("Size of array: %lu bytes, size of int element: %lu bytes\n", sizeof(numbers), sizeof(numbers[0]));
}
