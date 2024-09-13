#include <stdio.h>
#include <math.h>


int main()
{
	float I1, I2;
	float W1, W2, W3, W4, W5, W6;

	float E1, E2, E3, S1, S2, S3, T1, T2, T3;

	printf("\nDigite I1: ");
	scanf("%f", &I1);
	printf("Digite I2: ");
	scanf("%f", &I2);
    
	W1 = 7;
	W2 = 3;
	W3 = 5;
	W4 = 9;
	W5 = 2;
	W6 = 8;

	E1 = I1 * W1 + I2 * W2;
	T1 = 1;
	S1 = 1 / (1.0 + exp( 10 * (E1 - T1)));
    
	E2 = (I1 * W3) + (I2 * W4);
	T2 = 10;
	S2 = 1 / (1+ exp(- 10 * (E2 - T2)));
    

	E3 = (S1 * W5) + (S2 * W6);
	T3 = 1;
	S3 = 1 / (1.0 + exp( 10 * (E3 - T3)));

    
    
	printf("\nE1 : %.2f\n", E1);
	printf("S1 : %.2f\n\n", S1);
	printf("E2 : %.2f\n", E2);
	printf("S2 : %.2f\n\n", S2);
	printf("E3 : %.2f\n", E3);
	printf("S3 : %.2f\n\n", S3);
    

	return 0;
}