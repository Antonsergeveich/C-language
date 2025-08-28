#include<stdio.h>
#include<string.h>

//#define ONE
//#define TWO
//#define THREE
//#define FOUR
#define FIVE

int main(void){
    char s1[12] = "Hello";
    char s2[10] = "Hello";

    #ifdef ONE
    const char *str1 = s1;
    const char *str2 = s2;

    int i = 0;
    for( ; str1[i] != '\0' && str2[i] != '\0'; ++i){
        if(str1[i] != str2[i]){
            puts("String are not equal!");
            return 0;
        }

        if(str1[i] != str2[i]){
            puts("String lengths are not equal!");
            return 0;
        }
    }
    puts("String are equal!");
    #endif
    #ifdef TWO
        int res = strcmp(s1,s2); //сравнение строк
        if(res == 0)puts("Strings are equal!");
        else puts("Strings are not equal!");
    #endif
    #ifdef THREE
        const char* strings[] = {
            "Ship","Shopping","Shematic","Super","Car","Sherif"
        };
        for(int i = 0; i < sizeof(strings)/sizeof(*strings); ++i){
            if(strncmp(strings[i],"Sh",2) == 0){ //сравниваем первые два символа "Sh"
                puts(strings[i]);
            }
        }
    #endif
    #ifdef FOUR
        char str[] = "Abracadabra";
        char *ptr1 = strchr(str, 'a'); //ищет букву а сначала строки

        printf("str = %p\nptr1 = %p\n", str, ptr1);
            if(ptr1 != 0)
                printf("*ptr1 = %c\n", *ptr1);

        char *ptr2 = strrchr(str, 'a'); //ищет букву а с конца строки
        printf("str = %p\nptr2 = %p\n", str, ptr2);
            if(ptr2 != 0)
                printf("*ptr2 = %c\n", *ptr2);           
    #endif
    #ifdef FIVE
    //    char str[] = "Abracadabra";
    //     char *ptr1 = strstr(str, "ra"); //

    //     printf("str = %p\nptr1 = %p\n", str, ptr1);
    //         if(ptr1 != 0)
    //             printf("*ptr1 = %s\n", ptr1);

        char pass[] = "dffg90!#$$A";               

        char *ptr2 = strpbrk(pass, "@!#$^&?"); //содержится хотябы один символ вот этой приведённой подстроке
        printf("pass = %p\nptr2 = %p\n", pass, ptr2);
            if(ptr2 != 0)
                printf("*ptr2 = %s\n", ptr2); 
    #endif
    return 0;
}