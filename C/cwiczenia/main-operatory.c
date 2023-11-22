#include "stdio.h"
#include "limits.h"

typedef struct {
    int x;
    int y;
} strultura_t;

int main()
{
    printf("Helo\n");

    char abc[] = "abc";
       
    char xyz[] = "xyz";

    char znak = 'a';


    char *p = abc;
    printf("%c\n", ++*p);
    p = xyz;
    printf("%c\n", *p++);

    char *l = &znak;

    printf("%c\n", ++(*l) );

    int i = 1, j = 2, k = 3;
    printf("%d\n", ++i + ++j * --k); // najpier ++, potem * potem +


    printf("%d, %d\n", sizeof i, sizeof(i));

    strultura_t test;
    printf("%d, %d\n", sizeof test, sizeof(test));

    getchar();

    return 0;

}