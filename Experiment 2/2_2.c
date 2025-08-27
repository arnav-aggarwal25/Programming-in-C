#include <stdio.h>
int main(){
    int c,f;
    printf("Enter temp in celcius");
    scanf("%d",&c);
    f=(c*9/5) + 32;
    printf("The temp in farenheight is : %d\n",f);
    return 0;

}