#include "stdio.h"
#include "limits.h"

typedef struct{
    int x;
}object;

typedef enum {OK, OBJ_FAIL, FILE1_FAIL, FILE2_FAIL} status_t;

status_t do_something()
{
    FILE *file1, *file2;
    object *obj;
    status_t ret_val = 0;

    file1 = fopen("a_file", "w");
    if(file1 == NULL){
        ret_val = FILE1_FAIL;
        goto FAIL_FILE1;
    }

    file2 = fopen("another_file", "w");
    if(file2 == NULL){
        ret_val = FILE2_FAIL;
        goto FAIL_FILE2;
    }
    obj = (object* )malloc(sizeof(object));
    if(obj == NULL){
        ret_val = OBJ_FAIL;
        goto FAIL_OBJ;
    }

    free(obj);
    FAIL_OBJ:
        fclose(file2);
    FAIL_FILE2:
        fclose(file1);
    FAIL_FILE1:
        return ret_val;
    
}

size_t find_elements(size_t len, int arr[len], int key){
    size_t pos = (size_t ) -1;
    for(size_t i = 0; i < len; ++i){
        if(arr[i] == key){
            pos = i;
            break;
        }
    }
    return pos;
}

int absolute_value_not_ok(int a){ // złe bo -INT_MIN // niezdefiniowane zachowanie

    if(a < 0  ){
        return -a;
    }
}
int absolute_value_ok(int a){ // złe bo -INT_MIN // niezdefiniowane zachowanie

    if(a < 0  ){
        return -(unsigned)a; // dobre elminuje przelełnienie
    }
}



int main()
{

}