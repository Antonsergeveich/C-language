#include "pow_n.h"

int pow_n(int num, int pow) {
	if (pow == 0) {
		return 1;
	}
	return num * pow_n(num, pow - 1);
}