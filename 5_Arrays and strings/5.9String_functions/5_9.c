#include<stdio.h>
#include<string.h>

//#define ONE
//#define TWO
//#define THREE
//#define FOUR
#define FIVE

int main(void){

    #ifdef ONE
    char source[100] = "Source string";
    char destination[10];

    const char *src = source;
    char *dst = destination;
    int max_len_copy = sizeof(destination);

    while(*src != '0' && max_len_copy-- > 1){
        *dst++ = *src++;
    }
    *dst = '\0';

    puts(destination);
    #endif

    #if defined(TWO)
    char source[100] = "Source string";
    char destination[12];

    //strcpy(destination,source);
    int max_len = sizeof(destination) - 1;
    //strncpy(destination, source, max_len);
    strncpy(destination, "Hello Anton", max_len);
    destination[max_len] = '\0';
    puts(destination);

    #endif

    #if defined(THREE)
    char str[100] = "Length of the string";
    const char *buf = str;
    size_t length = 0;

    while(*buf++)
        length++;
       
    printf("length = %zu\n", length); 
    #endif

    #ifdef FOUR
    const char str[100] = "Length of the string";

    size_t length = strlen(str);

    printf("length = %zu\n", length);
    #endif

    #if defined(FIVE)
    char str_cat[100] = "Anton ";
    char str[15] = "Pershin ";
    strcat(str_cat, "Sergeevich");
    printf("%s", str_cat);
    printf("\n");

    size_t max_add = sizeof(str) - strlen(str) - 1;
    strncat(str, str_cat, max_add);
    str[sizeof(str) - 1] = '\0';

    printf("%s",str);

    #endif
    return 0;
}