#include <stdio.h>
#include "file.h"

int main(){
    printf("What temperature is it now?");
    int temp;
    scanf("%d\n",&temp);
    printf("Input: %d\n", temp);
    if(temp > 70){
        printf("Temperature is %d\n - HOT LIKE HELL\n", temp);
    }else if(temp <= 70 && temp >= 30){
        printf("Temperature is in the between 70 and 30\n");
    }else{
        printf("Temperature is less then 30.\n");
    }

    int* intArr = NULL;
    intArr[0] = 50;

    printf("End of program.\n");
    return 0;
}
