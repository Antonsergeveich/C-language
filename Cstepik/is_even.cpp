#include "is_even.h"

int is_even(int n) {
	if ((n & 1) == 0) return 1;
	else return 0;
}