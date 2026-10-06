

#include <stdio.h>
#include <string.h>

void combinations(char str[], char result[], int index, int start, int n)
{
    if(index > 0)
    {
        result[index] = '\0';
        printf("%s\n", result);
    }
    for(int i = start; i < n; i++)
    {
        result[index] = str[i];
        combinations(str, result, index + 1, i + 1, n);
    }
}
int main()
{
    char str[100];
    char result[100];
    printf("Enter a string: ");
    scanf("%s", str);
    int n = strlen(str);
    combinations(str, result, 0, 0, n);
    return 0;
}