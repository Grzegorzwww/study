#include "stdio.h"
#include "limits.h"


void f1(int i){printf("f1 = %d\n");}
void f2(int i){printf("f2 = %d\n");}
void f3(int i){printf("f3 = %d\n");}

int main()
{

void (* tab[3])(int);

    tab[0] = &f1;
    tab[1] = &f2;
    tab[2] = &f3;

    
    tab[1](100);

    char x;
    int m_int = INT_MAX;
    x = m_int;

    printf("%x\n", x);



    getchar();



}