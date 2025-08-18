/*Продолжите программу, которая читает из входного потока 9 целых чисел,
записанных в одну строчку через пробел, и помещает их по порядку 
в двумерный целочисленный массив ar_2D размерностью 3 x 3. 
В тестах гарантируется наличие минимум 9 целых чисел.*/
#include <stdio.h>

//#define ONE
#define TWO
#define SIZE 3
#ifdef ONE
int main(void)
{
    int ar_2D[3][3];
    
    for(int i = 0; i < 3; i++){
         for(int j = 0; j < 3; j++){
              scanf("%d ", &ar_2D[i][j]);   
         }
    }
    // здесь продолжайте программу

    __ASSERT_TESTS__ // макроопределение для тестирования (не убирать и должно идти непосредственно перед return 0)
    return 0;
#endif  

#ifdef TWO

int main(void)
{
    int ar_2D[SIZE][SIZE], count = 0, *p = ar_2D[0];
    while(count < SIZE * SIZE)
        scanf("%d", p + count++);
    return 0;
}
#endif