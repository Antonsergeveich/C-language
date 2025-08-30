/*Продолжите программу. Замените в строке str все дефисы (-) фрагментом "-+-". 
Выведите полученную строку в консоль. В тестах гарантируется, 
что результирующая строка умещается в массив str.*/
#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[100] = {0};
    fgets(str, sizeof(str)-1, stdin);
    char* ptr_n = strrchr(str, '\n');
    if(ptr_n != NULL)
        *ptr_n = '\0';
    char buf[100*3] = {0};
    int j = 0;
    for(int i = 0; str[i] != '\0'; i++){
     if(str[i] == '-'){
            buf[j++] = '-';
            buf[j++] = '+';
            buf[j++] = '-';
         }
        else{
            buf[j++] = str[i];   
        }
    }
    buf[j] = '\0';
    strcpy(str,buf);
    printf("%s",str);
    // здесь продолжайте программу

    return 0;
}