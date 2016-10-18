#include <stdio.h>

double plus(double a, double b){
	return a + b;
}

double multi(double a, double b){
	return a * b;
}

double minus(double c, double d){
	return c - d;
}

int main(void){
	double a = 1, b = 2, c = 3, d = 4, e = 5, f = 6, g = 8, h = 2, j = 2;

	printf("plus=%f\n"
		"minus%f\n"
		"multi=%f\n"
		"division=%f\n"
		"power=%f\n", plus(a, b), minus(c, d), multi(e, f), division(g, h), power(j));
	return 0;
}