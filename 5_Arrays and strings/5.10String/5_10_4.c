/*Продолжите программу. В строке str необходимо заменить все подряд идущие дефисы 
(например: --, ---, ---- и т.д.) на один дефис (-). Выведите в консоль полученную строку.*/
#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[100] = {0};
    fgets(str, sizeof(str)-1, stdin);
    char* ptr_n = strrchr(str, '\n');
    if(ptr_n != NULL)
        *ptr_n = '\0';
    char result[100] = {0};
    int j = 0;
    for(int i = 0; str[i] != '\0'; i++){
         if(str[i] == '-'){
              result[j++] = '-';
              while(str[i+1] == '-')i++;
         }
         else {
             result[j++] = str[i];
         }
    }
    printf("%s",result);
    // здесь продолжайте программу

    return 0;
}