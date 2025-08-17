/*Выполните сортировку второй половины массива ws по убыванию (невозрастанию), 
используя метод сортировки выбором. То есть, 
сортировать нужно элементы с индексами от count/2 до count-1 включительно. 
Выведите в консоль все полученные значения массива ws (первые count элементов) 
в одну строчку через пробел с точностью до сотых.*/

#include <stdio.h>

#define TOTAL     20

int main(void)
{
    float ws[TOTAL] = {0.0f};
    size_t count = 0;
    size_t sz_ar = sizeof(ws) / sizeof(*ws);

    while(count < sz_ar && scanf("%f", &ws[count]) == 1)
        count++;
    int max;
    for(int i=count/2;i<count-1;i++){
        max = i;
        for(int j=i+1;j<count;j++){
            if(ws[max]<ws[j])max=j;
        }
        if(max!=i){
            float buf = ws[i];
            ws[i]=ws[max];
            ws[max]=buf;
        }
    }

    // здесь продолжайте программу
    for(int i = 0; i < count; i++){
        printf("%.2f ",ws[i]);
    }
    return 0;
}