#include "is_triangle.h"

int is_triangle(int a, int b, int c) {
	return a < b + c && b < a + c && c < a + b ? 1 : 0;
}