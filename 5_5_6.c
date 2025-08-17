/*Из массива pows необходимо удалить все элементы кратные 3 (делятся нацело на 3). 
Если таких элементов нет, то ничего удалять не нужно. 
Выведите в консоль по порядку в одну строчку через пробел полученные значения
оставшихся элементов массива pows.*/
#include <stdio.h>

#define TOTAL     20

int main(void)
{
    short pows[TOTAL] = {0};
    size_t count = 0;
    size_t sz_ar = sizeof(pows) / sizeof(*pows);

    while(count < sz_ar && scanf("%hd", &pows[count]) == 1){
        if(pows[count]%3==0){
            count--;
        }
        count++;
     }
     for(int i = 0; i < count; i++){
         printf("%d ", pows[i]);
     }
    // здесь продолжайте программу

    return 0;
}