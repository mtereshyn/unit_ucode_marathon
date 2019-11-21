#include <stdio.h>
double mx_pow_rec(double n, unsigned int pow) {
	double res;
	if (pow == 0) {
		return 1;
	}
	else if (pow > 0){
		return n * mx_pow_rec(n, pow - 1);
	}
	else {
		return 1 / mx_pow_rec(n, -pow);
	}
	return 0;
}
