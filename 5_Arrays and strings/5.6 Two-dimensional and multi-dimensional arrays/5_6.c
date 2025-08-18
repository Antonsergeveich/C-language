#include <stdio.h>

#define N 3
//#define ONE
//#define SIZE 
//#define POINTER

int main(void){
#ifdef ONE
char pole_2[N * N];
char x = pole_2[i * N + j]; //двумерный массив в строку
#endif
#ifdef SIZE
    int game_pole[5][3];
    size_t bytes = sizeof(game_pole); //размер массива в байтах
    size_t row_bytes = sizeof(game_pole[0]); //размер одной строки в байтах(массив из трёх элементов)
    size_t rows = sizeof(game_pole) / sizeof(game_pole[0]); // количество строк в массиве
    size_t cols = sizeof(game_pole[0]) / sizeof(game_pole[0][0]); //количество элементов в строке
#endif
#ifdef POINTER
    char game_pole[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    char *p_row = game_pole[1];  // указывает на второй одномерный массив состоящий из трёх элементов
    printf("%d\n", *p_row);
    printf("%d\n", *(p_row - 2));
    char (*p_ar)[3] = game_pole; //объявление указателя на двумерный массив
    char *ptr[3];                //массив из трёх указателей
    char x = p_ar[1][2];         //хранит второй элемент из массива game_pole

    return 0;
#endif
}