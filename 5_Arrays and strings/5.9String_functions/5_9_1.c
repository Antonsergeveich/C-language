/*Напишите программу, которая в массив строк cities читает из входного потока названия
шести городов, записанных в одну строчку через пробел. 
Максимальная длина названия города не превышает 50 символов.
Из всех названий выбрать наибольшее по длине и вывести в консоль.*/
#include<stdio.h>
#include<string.h>

int main(void){
    char cities[6][51];
    int max = 0;
    for(int i = 0; i < 6; i++){
        scanf("%s", cities[i]);
        if(strlen(cities[max]) < strlen(cities[i])) max = i;
    }
    printf("%s ", cities[max]);
    
    return 0;   
}
