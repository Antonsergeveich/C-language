#include "is_range.h"

int is_range(double x, double a, double b) {
	if (x > a && x < b) return 1;
	else return 0;
}