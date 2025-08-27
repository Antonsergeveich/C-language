/*Напишите программу, которая в массив строк cities читает из входного потока 
названия шести городов, записанных в одну строчку через пробел. 
Максимальная длина названия города не превышает 50 символов. 
Из всех названий выбрать два наибольших по длине и вывести в консоль в одну строчку 
через пробел в порядке их следования.*/
#include <stdio.h>
#include <string.h>

#define ROW 6
#define COL 51

int main(void) {
    char cities[ROW][COL];
    
    for(int i = 0; i < ROW; i++) {
        if(scanf("%50s", cities[i]) != 1){
            return 1;
        }
    }
    
    int max1 = 0, max2 = 1;
    
    if(strlen(cities[max1]) < strlen(cities[max2])) {
        int temp = max1;
        max1 = max2;
        max2 = temp;
    }
    
    for(int i = 2; i < ROW; i++) {
        int current_len = strlen(cities[i]);
        int max1_len = strlen(cities[max1]);
        int max2_len = strlen(cities[max2]);
        
        
        if(current_len > max1_len) {
            max2 = max1;    
            max1 = i;    
        }
        else if(current_len == max1_len) {
            if(i < max1) {  
                max2 = max1;
                max1 = i;
            }
        }
        else if(current_len > max2_len) {
            max2 = i;      
        }
        else if(current_len == max2_len) {
            if(i < max2) {
                max2 = i;
            }
        }
    }
    
    if(max1 < max2) {
        printf("%s %s", cities[max1], cities[max2]);
    } else {
        printf("%s %s", cities[max2], cities[max1]);
    }
    
    return 0;
}