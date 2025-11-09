#include "calc_rect.h"
int calc_rect(int w, int h, int type) {
	return type == 1 ?  w * h : (w + h) * 2;
}