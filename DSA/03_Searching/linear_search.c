
#include <stdio.h>
int main()
{
    int a[100], n, i, key, pos = -1;

    scanf("%d", &n);

    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    scanf("%d", &key);

    for(i = 0; i < n; i++)
    {
        if(a[i] == key)
        {
            pos = i;
            break;
        }
    }

    if(pos != -1)
        printf("Element found at index %d", pos);
    else
        printf("Element not found");

    return 0;
}

//found not found

#include <stdio.h>

int main()
{
    int a[100], n, key, found = 0;

    scanf("%d", &n);

    for(int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    scanf("%d", &key);

    for(int i = 0; i < n; i++)
    {
        if(a[i] == key)
        {
            found = 1;
            break;
        }
    }

    if(found == 1)
        printf("Found");
    else
        printf("Not Found");

    return 0;
}

//

#include <stdio.h>

int main()
{
    int a[100], n, key;

    scanf("%d", &n);

    for(int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    scanf("%d", &key);

    for(int i = 0; i < n; i++)
    {
        if(a[i] == key)
            printf("%d ", i);
    }

    return 0;
}