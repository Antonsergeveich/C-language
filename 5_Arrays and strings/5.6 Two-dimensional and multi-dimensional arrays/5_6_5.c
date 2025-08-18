#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE    10
#define MINES   12

int main(void)
{
    srand(time(NULL));
    char pg[SIZE][SIZE] = {0};
    int mines = 0;
    while(mines < MINES){
        int i = rand() % SIZE;
        int j = rand() % SIZE;
        
        int check = 1;
        for(int k = -1; k <= 1; k++){
            for(int l = -1; l <= 1; l++){
                if(i+k>=0 && i+k<SIZE && j+l>=0 && j+l<SIZE)
                    if(pg[i+k][j+l] == '*') check = 0;
            }
        }
        if(check && pg[i][j] != '*'){
            pg[i][j] = '*';
            mines++;
        }
    }

    for(int i = 0; i < SIZE; i++){
        for(int j = 0; j < SIZE; j++){
            printf("%c ", pg[i][j] == '*' ? '*':'0');
        }
        printf("\n");
    }
    return 0;
}