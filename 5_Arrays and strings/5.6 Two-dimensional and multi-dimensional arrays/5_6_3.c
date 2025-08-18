#include <stdio.h>

#define ROWS    3
#define COLS    5

int main(void)
{
    short vls[ROWS][COLS] = {0};
    short *ptr_vls = &vls[0][0];

    short x;
    for(int i = 0;i < ROWS * COLS && scanf("%hd", &x) == 1; ++i)
        *ptr_vls++ = x;
    double mean[3] = {};
    for(int i = 0; i < ROWS; i++){
        double arg = 0;
        double sum = 0;
        for(int j = 0; j < COLS; j++){
            sum += vls[i][j];
        }
        printf("%.2lf ", sum / (double)COLS);
    }
    return 0;
}