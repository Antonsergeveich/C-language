#include <stdio.h>

//#define MY
#define STEP

int main(void)
{
    #ifdef MY
    short ar[10], marks[5];
    size_t count = 0;
    size_t sz_ar = sizeof(ar) / sizeof(*ar);
    size_t sz_marks = sizeof(marks) / sizeof(marks[0]);
    while(count < sz_ar && scanf("%hd", &ar[count]) == 1)count++; 
    for(size_t i = 0; i < sz_marks && i < count; i++){ 
        marks[i] = ar[count - 1 - i];
    }
    for(size_t i = 0; i < sz_marks; i++){
        printf("%d",marks[i]);
        if(i < sz_marks - 1)printf(" ");
        else printf("\n");
    }
    // здесь продолжайте программу
    #endif
    
    #ifdef STEP
    short ar[10], marks[5];
    size_t count = 0;
    size_t sz_ar = sizeof(ar) / sizeof(*ar);

    while(count < sz_ar && scanf("%hd", &ar[count]) == 1)
        count++;

    size_t sz_marks = sizeof(marks) / sizeof(*marks);
    for(int i = 0; i < sz_marks && count != 0; i++)
    {
        marks[i] = ar[--count];
        printf("%d ", marks[i]);
    }

    #endif
    return 0;
}
/*Необходимо из массива ar в обратном порядке (идя от последнего записанного значения к первому) 
скопировать прочитанные данные в массив marks (копирование выполнять от первого элемента к последнему), 
не выходя за пределы массива marks. То есть, в случае достижения последнего элемента массива marks, 
останавливать процедуру копирования. Вывести в консоль значения массива marks 
(от первого до последнего скопированного элемента) в одну строчку через пробел.*/