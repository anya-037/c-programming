
#include <stdio.h>
int main()
{
    int a[100], n, i, pos;
    scanf("%d", &n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter position: ");
    scanf("%d", &pos);
    for(i = pos; i < n - 1; i++)
    {
        a[i] = a[i + 1];
    }
    n--;
    for(i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}