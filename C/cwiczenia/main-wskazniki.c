#include "stdio.h"
#include "limits.h"

typedef struct
{
    int x;
    int y;
} testowa;

static testowa data = {4, 5};

testowa * get_structure(testowa *ret);


int main()
{
 
    testowa *to_get = NULL;
    testowa *to_get_2 = NULL;

    to_get_2 = get_structure(to_get);

    if(to_get_2 != NULL){
        printf("to_get != NULL\n");
    }else{
        printf("to_get == NULL\n");
    }

    printf("%d, %d\n", to_get_2->x, to_get_2->y);



}

testowa * get_structure(testowa *ret)
{
    ret = &data;
    return &data;
}