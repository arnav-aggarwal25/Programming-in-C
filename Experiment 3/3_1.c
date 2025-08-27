#include <stdio.h>
int main() {
    int a,b,c;
    printf("Enter side 1 of triangle : ");
    scanf("%d",&a);
    printf("Enter side 2 of triangle : ");
    scanf("%d",&b);
    printf("Enter side 3 of triangle : ");
    scanf("%d",&c);
     if ((a+b>c) && (b+c>a) && (c+a>b)){
     printf("This triangle is valid\n");
     }
     if ((a== b) && (b == c) && (c==a)) {
     printf("this is an equilateral triangle\n");
     }
     else if (a==b || b==c || c==a) {
     printf("this is an isoceles triangle\n");
     }
     else if ((a!=b) && (b!=c) && (c!=a)){
        printf("this is a scalene triangle\n");
     }
     else {
        printf("this triangle is not valid\n");
     }
     
return 0;

}