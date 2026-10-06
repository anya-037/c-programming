#include <stdio.h>

int main()
{
    int a[100], n, i, pos, value;

    scanf("%d", &n);

    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    scanf("%d", &pos);
    scanf("%d", &value);

    a[pos] = value;

    for(i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}