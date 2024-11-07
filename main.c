#include <stdio.h>

// Quake III Arena players function
float Q_rsqrt( float number ){
	long i;
	float x2, y;
	const float threehalfs = 1.5F;

	x2 = number * 0.5F;
	y  = number;
	i  = * ( long * ) &y;						// evil floating point bit level hacking
	i  = 0x5f3759df - ( i >> 1 );               // what the fuck?
	y  = * ( float * ) &i;
	y  = y * ( threehalfs - ( x2 * y * y ) );   // 1st iteration
	y  = y * ( threehalfs - ( x2 * y * y ) );   // 2nd iteration, this can be removed

	return y;
}

int main(){
    float number = 0;
    float inverse_sqrt_number = 0;
    scanf("%f", &number);
    inverse_sqrt_number = Q_rsqrt(number);
    printf("The inverse square root of %f is %f", number, inverse_sqrt_number);
}
