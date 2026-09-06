#include <stdio.h>
int main(){
    int a;
    printf("Enter the number:\n");
    scanf("%d",&a);
    int *p = &a;
    printf("Entered number : %d\n",a);
    printf("It's address : %p",&a);
    return 0;
}