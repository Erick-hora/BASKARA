#include <stdio.h>
#include <math.h>

int main () {
	double a, b, c, x1, x2, delta;
	printf ("coeficiente a: ");
	scanf ("%lf", &a);
	
    printf ("coeficiente b: ");
	scanf ("%lf", &b);
	
	printf ("coeficiente c: ");
	scanf ("%lf", &c);
	
	delta = b * b - 4 * a * c;
	
	if (a == 0 || delta < 0) {
		printf ("ESTE EQUACAO NAO POSSUI RAIZES REAIS! \n");
	}
	else {
		x1 = (-b + sqrt (delta)) / (2 * a);
		x2 = (-b - sqrt (delta)) / (2 * a);
		printf ("X1 = %.4lf\n", x1);
		printf ("X2 = %.4lf\n", x2);
	}
}
