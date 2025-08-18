#include <stdio.h>

#define ROWS    3
#define COLS    4

int main(void)
{
    int a[ROWS][COLS] = {0};
    int b[ROWS][COLS] = {0};
    int *ptr_a = &a[0][0];
    int *ptr_b = &b[0][0];
    int res[ROWS][COLS];
    int x;
    for(int i = 0;i < ROWS * COLS && scanf("%d", &x) == 1; ++i)
        *ptr_a++ = x;
    for(int i = 0;i < ROWS * COLS && scanf("%d", &x) == 1; ++i)
        *ptr_b++ = x;
    for(int i = 0; i < ROWS; i++){
        for(int j = 0; j < COLS; j++){
            res[i][j] = a[i][j] + b[i][j];
            printf("%d",res[i][j]);
            if(j < COLS - 1)printf(" ");
        }
        printf("\n");
    }
    /*int res[ROWS][COLS] = {0};

    for ( int i = 0; i < ROWS; ++i )
      for ( int j = 0; j < COLS; ++j ) {
        res[i][j] = a[i][j] + b[i][j];
        printf( "%d%c", res[i][j], ( j == 3 ) ? '\n' : ' ' );
    }*/
    return 0;
}