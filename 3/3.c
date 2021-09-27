/*
The prime factors of 13195 are 5, 7, 13 and 29.

What is the largest prime factor of the number 600851475143 ?
*/

#include <stdio.h>
#include <math.h>

int main(void){
  long n = 600851475143;
  int factors[50];
  int i = 2;
  int f_count = 0;
  int composite = 1;
  int limit = ceil(sqrt(n));
  
  while(composite == 1){
    if(!(n % i)){
      factors[f_count] = i;
      n = n / i;
      f_count ++;
    }
    else{
      i++;
      if(i == limit){
	  factors[f_count] = n;
	  composite = 0;
	}
    }
  }
  for(int i =0; i < f_count; i++){
    printf("%d\n",factors[i]);
  }
}
