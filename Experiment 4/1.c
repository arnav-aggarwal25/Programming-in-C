#include <stdio.h>
int globalVar = 10;
void modifyGlobal() {
    printf("Inside modifyGlobal(): globalVar before modification = %d\n", globalVar);
    globalVar = 20;
    printf("Inside modifyGlobal(): globalVar after modification = %d\n", globalVar);
}

void accessGlobal() {
    printf("Inside accessGlobal(): globalVar = %d\n", globalVar);
}

int main() {
    printf("Inside main(): Initial globalVar = %d\n", globalVar);

    modifyGlobal(); 

    accessGlobal(); 

    printf("Inside main(): Final globalVar = %d\n", globalVar);

    return 0;
}
