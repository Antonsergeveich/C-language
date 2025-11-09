#include "get_gm.h"

double get_qm(double qm_1, int m, int x) {
	return ((m - 1.0) / m) * qm_1 + (1.0 / m) * x;
}