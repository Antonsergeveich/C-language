#include <stdio.h>

#define TOTAL     10

int main(void)
{
    int digs[TOTAL] = {0};
    size_t count = 0;
    size_t sz_ar = sizeof(digs) / sizeof(*digs);

    while(count < sz_ar && scanf("%d", &digs[count]) == 1)
        count++;
    int pos = -1;
    for(int i = 0; i < count; i++){
        if(digs[i] == 5){
            pos = i;
            break;
        }
    }    
    if(pos != -1){
        if(count < sz_ar) {
            count++;
        }
        for(int i = count - 1; i > pos + 1; i--){
            digs[i] = digs[i-1];
        }
        digs[pos+1] = -5;
    }
    for(size_t i = 0; i < count; i++){
        printf("%d ", digs[i]);
    }

    return 0;
}

/*Необходимо после первого найденного элемента со значением 5 массива digs вставить новое значение -5.
Обратите внимание, что при вставке нового значения, последний элемент массива digs может теряться 
(если длина массива не позволяет хранить все значения). 
Также следует учитывать, что элемент со значением 5 может отсутствовать в массиве digs 
(тогда ничего вставлять не нужно). 
Выведите в консоль по порядку значения всех прочитанных + добавленных элементов массива digs в одну строчку через пробел.*/