/Write a program to input two numbers and display their sum, difference, product, and quotient.
#include <stdio.h>
int main() {
    int a,b,add,sub,pr,qu;
    printf("Enter number 1 : ");
    scanf("%d",&a);
    printf("Enter Numebr 2 : ");
    scanf("%d",&b);
    add=a+b;
    sub=a-b;
    pr=a*b;
    qu=a/b;
    printf("Their addition is : %d\n",add);
    printf("Their subtraction is : %d\n",sub);
    printf("Their product is : %d\n",pr);
    printf("Their quotient is : %d\n",qu);
    return 0;
}