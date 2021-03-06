/*
Each new term in the Fibonacci sequence is generated by adding the previous two terms. By starting with 1 and 2, the first 10 terms will be:

1, 2, 3, 5, 8, 13, 21, 34, 55, 89, ...

By considering the terms in the Fibonacci sequence whose values do not exceed four million, find the sum of the even-valued terms.
 */

#include <stdio.h>

int main(void){
  long int fib[100];

  fib[0] = 1;
  fib[1] = 2;
  for(int i = 2; i < 100; i++){
    fib[i] = fib[i-1] + fib[i-2];
  }

  for(int k = 0; k <100; k++){
    if(fib[k] < 4000000){
      printf("%lu\t",fib[k]);
    }
    else{
      printf("\n");
      break;
    }
  }

  long int sum = 0;
  for(int j = 0; j < 100; j++){
    if(fib[j] >= 4000000){
      break;
    }
    else if(fib[j] % 2 == 0){
      printf("%ld\n",fib[j]);
      sum += fib[j];
    }
  }
  printf("Sum of even elements: %ld\n",sum);
  
}
