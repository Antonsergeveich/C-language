/*Продолжите программу, которая читает из входного потока строку целиком
с помощью функции fgets(). На выходе формируется корректная Си строка.
Выделите из строки второе слово (слова разделяются одним или несколькими пробелами)
и выведите его в консоль. Пробелов до и после выделенного слова быть не должно. 
Если строка состоит из одного слова, то в консоль вывести "no".*/
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
    
    int count = 0;
    int found = 0;
    for(char *p = str; *p; p++){
        if(*p!=' '&&(p==str||*(p-1)==' ')){
            count++;
        }
         if(count == 2){
             printf("%c",*p);
             found = 1;
         }  
    }
    if(!found){
        printf("no");
    }
    // здесь продолжайте программу

    return 0;
}