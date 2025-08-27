#include<stdio.h>
#include<string.h>

//#define ONE
#define TWO

int main(void){

    #ifdef ONE
    char s1[12] = {"Hello"};
    char s2[10] = {"Hello"};

    const char *str1 = s1;
    const char *str2 = s2;

    int i = 0;
    for( ; str1[i] != '\0' && str2[i] != '\0'; ++i){
        if(str1[i] != str2[i]){
            puts("String are not equal!");
            return 0;
        }
    }

    if(str1[i] != str2[i]){
        puts("String lengths are not equal!");
        return 0;
    }

    puts("Strings are equal!");
    #endif

    #ifdef TWO
    char s1[12] = {"Hell"};
    char s2[10] = {"Hello"};

    int res = strcmp(s1,s2); //равенство строк
        if(res == 0)
            puts("String are equal!");
        else
            puts("String are not equal!");
    #endif

    
    return 0;
}