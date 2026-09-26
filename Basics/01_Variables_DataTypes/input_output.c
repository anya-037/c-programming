#include <stdio.h>

int main(){
    int n;
    char s1[100], s2[100];
    scanf("%d", &n);
    scanf(" %[^\n]", s1);
    scanf(" %[^\n]", s2);
    printf("Roll number: %d\n", n);
    printf("Full Name: %s\n", s1);
    printf("City: %s\n", s2);
    return 0;
}