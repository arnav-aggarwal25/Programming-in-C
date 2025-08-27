#include <stdio.h>
int main(){
    int l,b,p,a;
    printf("Enter length of the rectangle : ");
    scanf("%d",&l);
    printf("Enter breadth of the rectangle : ");
    scanf("%d",&b);
    p=2*(l+b);
    a=l*b;
    printf("The perimeter of the rectangle is : %d\n",p);
    printf("The area of the rectangle is : %d\n",a);
    return 0;

}