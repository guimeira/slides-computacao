#include <stdio.h>
#include <math.h>
int main() {
	double c1 = 3;
	double c2 = 4;
	double hip = sqrt(pow(c1, 2) + pow(c2, 2));
	printf("Catetos: %lf e %lf Hipotenusa: %lf\n",
		c1, c2, hip);
	return 0;
}