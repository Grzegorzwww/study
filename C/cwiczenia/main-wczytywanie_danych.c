#include "stdio.h"
#include "limits.h"


void f1(int i){printf("f1 = %d\n");}
void f2(int i){printf("f2 = %d\n");}
void f3(int i){printf("f3 = %d\n");}

int main()
{
    char c;
    char str_in[200];
    int i = 0;
    while((c = getchar()) != EOF && c != '\n'){
        str_in[i++] = c;
        putchar(c);
    }
    str_in[i]= '\0';

}