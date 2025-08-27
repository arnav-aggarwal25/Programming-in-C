#include <stdio.h>
int main() {
    int l,b,p,a;
    printf("enter length of rectangle :");
    scanf("%d",&l);
    printf("enter breadth of rectangle :");
    scanf("%d",&b);
    p = (l+b)*2;
    a = l*b;
    printf("The perimeter of the rectangle is : %d\n",p);
    printf("the area of the rectangle is : %d\n",a);
    return 0;
}