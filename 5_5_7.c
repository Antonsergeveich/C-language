/*Выполните сортировку массива ws по возрастанию (неубыванию), 
используя метод сортировки выбором. Сортировать нужно только первые count элементов. 
Выведите в консоль значения отсортированного массива ws (первые count элементов) 
в одну строчку через пробел с точностью до сотых.*/
#include <stdio.h>

#define TOTAL     20

int main(void)
{
    float ws[TOTAL] = {0.0f};
    size_t count = 0;
    size_t sz_ar = sizeof(ws) / sizeof(*ws);

    while(count < sz_ar && scanf("%f", &ws[count]) == 1) count++;
    int min;
    for(int i = 0; i < count - 1; i++){
        min = i;
        for(int j = i + 1; j < count; j++)                
        {
         if(ws[min] > ws[j]) min = j;
        }
        if(min!=i){
            float buf = ws[i];
            ws[i] = ws[min];
            ws[min] = buf;
        }
    }
    
    for(int i = 0; i < count; i++){
        printf("%.2f ",ws[i]);
    }
    // здесь продолжайте программу

    return 0;
}