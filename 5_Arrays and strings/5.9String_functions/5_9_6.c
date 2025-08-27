/*Продолжите программу, которая в массив строк ps (двумерный массив 7 x 50) 
читает из входного потока фамилии семи сотрудников, записанных в одну строчку через пробел. 
Считать, что максимальная длина фамилии не превышает 50 символов. 
Сформировать еще одну строку ps_sort, в которую через пробел скопировать фамилии 
сотрудников по возрастанию их длин. В конце последней фамилии пробела быть не должно, 
сразу стоять символ '\0'. Вывести строку ps_sort в консоль.*/
#include <stdio.h>
#include <string.h>

#define ROWS 7
#define COLS 51

void insertion_sort(char arr[ROWS][COLS],int n){
    for(int i = 0; i < n; i++){
        char key[COLS];
        strcpy(key,arr[i]);
        int j = i - 1;
        while(j>=0&&strlen(arr[j])>strlen(key)){
            strcpy(arr[j+1],arr[j]);
            j = j - 1;
        }
        strcpy(arr[j+1],key);
    }
}

int main(void)
{
    char ps[ROWS][COLS];
    char ps_sort[ROWS*COLS];
    for(int i = 0; i < ROWS; i++){
        scanf("%50s",ps[i]);
    }
    insertion_sort(ps,ROWS);
    ps_sort[0] = '\0';
    for(int i = 0; i < ROWS; i++){
        strcat(ps_sort,ps[i]);
        if(i<ROWS-1)strcat(ps_sort," ");
    }
    printf("%s",ps_sort);

    return 0;
}