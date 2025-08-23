#include <stdio.h>
#include <stdlib.h>

//#define ONE
#define TWO

#define SIZE    10
#define MINES   12

int main(void)
{
    char pg[SIZE][SIZE] = {0};
    #ifdef ONE
    int mines = MINES;
    
    while(mines){
        int x = rand() % 10;
        int y = rand() % 10;
        int sum = 0;
        
        for (int i = -1; i < 2; i++){
            for (int j = -1; j < 2; j++){
                if (x + i >= 0 && x + i < SIZE && y + j >= 0 && y + j < SIZE){
                    sum += pg[x + i][y + j];
                }
            }
        }
        
        if (sum == 0){
            pg[x][y] = '*';
            mines--;
        }
    }
    #endif
    #ifdef TWO
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
            printf("%c", pg[i][j] == '*' ? '*':'0');
            if(j < SIZE -1)printf(" ");
        }
        printf("\n");
    }
    #endif
}