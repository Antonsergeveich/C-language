/*Продолжите программу. В строке str необходимо найти последний символ '\n' и если он найден,
то заменить на символ '\0'. Вывести в консоль полученную строку str в квадратных скобках.*/
#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[100] = {0};
    fgets(str, sizeof(str)-1, stdin);
    if(strrchr(str,'\n') != 0){
         *strrchr(str,'\n') = '\0';   
    }
    printf("[%s]",str);
    // здесь продолжайте программу

    return 0;
}