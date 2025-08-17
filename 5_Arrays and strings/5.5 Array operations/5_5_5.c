/*Из массива pows необходимо удалить элемент с первым найденным четным значением. 
Если такой элемент не был найден, то, соответственно, ничего удалять не нужно. 
Выведите в консоль по порядку в одну строчку через пробел полученные 
значения оставшихся элементов массива pows.*/

#include <stdio.h>

#define TOTAL     20

int main(void)
{
    short pows[TOTAL] = {0};
    size_t count = 0;
    size_t sz_ar = sizeof(pows) / sizeof(*pows);
    int index = 0;
    while(count < sz_ar && scanf("%hd", &pows[count]) == 1){
        
    if(pows[count]%2==0&&index==0){
        count--;
        index++;
        }
        count++;
    }
    for(int i = 0; i < count; i++){
        printf("%d ",pows[i]);
    }
    // здесь продолжайте программу

    return 0;
}