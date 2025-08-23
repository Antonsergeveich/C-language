/*Продолжите программу, которая читает из входного потока строку целиком 
с помощью функции fgets(). На выходе формируется корректная Си строка.
Удалите из прочитанной строки все латинские символы 'e' и выведите в консоль
полученную строку.*/
#include <stdio.h>

void strip_string(char* str, int max_len)
{
    int count = 0;
    while(*str++ != '\0' && count++ < max_len);

    if(count > 1) {
        str -= 2;
        if(*str == '\n')
            *str = '\0';
    }
}

int main(void)
{
    char str[100];
    fgets(str, sizeof(str), stdin);
    strip_string(str, sizeof(str));
    int i = 0, j = 0;
    while(str[i] != '\0'){
        if(str[i] != 'e'){
            str[j] = str[i];
            j++;
        }
        i++;
    }
    str[j] = '\0';
    
    printf("%s", str);
    // здесь продолжайте программу

    return 0;
}