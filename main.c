#include <stdio.h>
#include "fast_inverse_sqrt.h"

int main(){
  float number = 0.0f;
  float inverse_sqrt_number = 0.0f;

  scanf("%f", &number);

  inverse_sqrt_number = Q_rsqrt(number);
  printf("The inverse square root of %f is %f", number, inverse_sqrt_number);
}
