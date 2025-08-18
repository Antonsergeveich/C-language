#include <stdio.h>

#define SIZE_ROWS 4
#define SIZE_COLS 3
int main(void)
{
    int ar_2D[SIZE_ROWS][SIZE_COLS], count = 0, *p = ar_2D[0];
    while(count < SIZE_ROWS * SIZE_COLS)
            scanf("%d ", p + count++);
    
    for(int j = 0; j < SIZE_COLS; j++){
        for(int i = 0; i < SIZE_ROWS; i++){
            printf("%d",ar_2D[i][j]);
            if(i < SIZE_ROWS -1)printf(" ");
        }
        printf("\n");
    }
    return 0;
}