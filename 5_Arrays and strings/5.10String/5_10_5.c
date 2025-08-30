/*С каждой новой строки вводятся названия городов. 
Напишите программу, которая читает эти строки, кроме пустых 
(пустая строка должна быть проигнорирована). 
Программа должна завершаться после чтения максимум 10 городов. 
Максимальная длина названия каждого города не превышает 50 символов. 
Сформировать строку, в которой названия городов идут по порядку (считывания) через пробел, 
кроме тех, что содержат фрагмент "на". Вывести сформированную строку в консоль.*/
#include<stdio.h>
#include<string.h>
#define ROWS 10
#define COLS 51

int main(void){
    char cities[ROWS][COLS];
    char result[ROWS*COLS] = "";
    int count = 0;
    char input[51];
    
    while(count < 10){
        if(fgets(input, sizeof(input), stdin) == NULL)break;
        input[strcspn(input, "\n")] = '\0';
        if(strlen(input) == 0) continue;
        strcpy(cities[count], input);
        count++;
    }
    
    for(int i = 0; i < count; i++){
     if(strstr(cities[i], "на") == NULL){
         if(strlen(result) > 0) strcat(result, " ");
         strcat(result, cities[i]);
         }
    }
    
    printf("%s\n", result);
    
    return 0;
}
