#include <stdio.h>

int main() {
    int main_var = 10; 

    printf("Inside main block: main_var = %d\n", main_var);

    {
        int inner_var = 20; 
        printf("Inside inner block: main_var = %d, inner_var = %d\n", main_var, inner_var);
    } 

    { 
        int another_inner_var = 30; 
        printf("Inside another inner block: main_var = %d, another_inner_var = %d\n", main_var, another_inner_var);
    } 

    return 0;
}
