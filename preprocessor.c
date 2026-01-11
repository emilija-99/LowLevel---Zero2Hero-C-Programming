#include <stdio.h>
#define DEBUG

int main(){
    #ifdef DEBUG
    printf("in debug mode: %s:%d",__FILE__, __LINE__);
    #endif


    return 0;
}
