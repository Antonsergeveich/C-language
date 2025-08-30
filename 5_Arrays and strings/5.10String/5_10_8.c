/*Продолжите программу. В переменной str содержится E-mail адрес. 
Необходимо проверить его корректность. Для этого в str должен присутствовать один символ '@' 
(не первый), а после него (не сразу) - символ '.' (не последний). 
Также в самом E-mail адресе допустимы только символы: a-z, A-Z, 0-9, '.', '_', '-'. 
Если строка str содержит корректный E-mail адрес, то в консоль вывести 1, иначе 0.*/
#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[100] = {0};
    fgets(str, sizeof(str)-1, stdin);
    char* ptr_n = strrchr(str, '\n');
    if(ptr_n != NULL)
        *ptr_n = '\0';
        int at_count = 0;
    int at_pos = -1;
    int dot_after_at = 0;
    
    for (int i = 0; str[i]; i++) {
        char c = str[i];
        
        if (!((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || 
              (c >= '0' && c <= '9') || c == '.' || c == '_' || c == '-' || c == '@')) {
            printf("0\n");
            return 0;
        }
        
        if (c == '@') {
            at_count++;
            at_pos = i;
        }
        
        if (at_pos != -1 && i > at_pos + 1 && c == '.') {
            dot_after_at = 1;
        }
    }
    
    int result = (at_count == 1) &&           
                 (at_pos > 0) &&              
                 (dot_after_at) &&            
                 (str[strlen(str)-1] != '.'); 
    
    printf("%d\n", result);
    return 0;
}