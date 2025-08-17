#include<stdio.h>

#define TOTAL_MARKS 10

//#define ONE
//#define INSERT
//#define DEL
#define SORT

int main(void){

#ifdef ONE
    float fank_1[100] = {2.4, -3.8, 0, 10.2, 11.8, -5.43};
    float fank_2[50];

    int size1 = sizeof(fank_1) / sizeof(fank_1[0]);
    int size2 = sizeof(fank_2) / sizeof(fank_2[0]);
    int size = (size1 < size2) ? size1 : size2;

    for(int i = 0; i < size; i++){
        fank_2[i] = fank_1[i];
    }

    for(int i = 0; i < size; i++){
        printf("%.2f",fank_2[i]);
        if(i < size - 1)printf(" ");
    }
#endif

#ifdef INSERT
    int marks[TOTAL_MARKS] = {3, 2, 5};
    int insert_indx = 2;
    
    for(int i = 0; i < TOTAL_MARKS; i++){
        printf("%d", marks[i]);
        if(i < TOTAL_MARKS - 1)printf(" ");
        else printf("\n");
    }
    
    for(int i = TOTAL_MARKS - 1; i > insert_indx; i--){
        marks[i] = marks[i - 1];
    }
    marks[insert_indx] = 4;
    for(int i = 0; i < TOTAL_MARKS; i++){
        printf("%d", marks[i]);
        if(i < TOTAL_MARKS - 1)printf(" ");
    }
#endif

#ifdef DEL
    int marks2[TOTAL_MARKS] = {3, 2, 4, 5, 2, 4};
    int del_index = 3;
    for(int i = 0; i < TOTAL_MARKS; i++){
        printf("%d",marks2[i]);
        if(i < TOTAL_MARKS - 1)printf(" ");
        else printf("\n");
    }

    for(int i = del_index; i < TOTAL_MARKS - 1; i++){
        marks2[i] = marks2[i + 1];
    }

    for(int i = 0; i < TOTAL_MARKS; i++){
        printf("%d",marks2[i]);
        if(i < TOTAL_MARKS - 1)printf(" ");
        else printf("\n");
    }
#endif

#ifdef SORT
    char a[] = {-3, 5, 0, -8, 1, 10};
    int min;
    int size = sizeof(a) / sizeof(a[0]);
    for(int i = 0; i < size; i++){
        printf("%d",a[i]);
        if(i < size - 1)printf(" ");
        else printf("\n");
    }
    for(int i = 0; i < size - 1; i++){
        min = i;
        for(int j = i + 1; j < size; j++){
            if(a[min] > a[j])
            min = j;
        }
        if(min != i){
            int buf = a[i];
            a[i] = a[min];
            a[min] = buf;
        }
    }
    for(int i = 0; i < size; i++){
        printf("%d",a[i]);
        if(i < size - 1)printf(" ");
        else printf("\n");
    }
#endif
    return 0;
}