#include <stdio.h>
int main(){
    int rows,columns;
    printf("Enter the value for rows and columns:\n");
    scanf("%d %d",&rows,&columns);
    int matrix[rows][columns];
    for(int i=0;i<rows;i++){
        for(int j=0;j<columns;j++){
            printf("Enter the element: ");
            scanf("%d",&matrix[i][j]);
        }
    }
    printf("The multidimensional array is:\n");
    for(int i=0;i<rows;i++){
        for(int j=0;j<columns;j++){
            printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}

//Matrix Operation

#include <stdio.h>
int main()
{
    int a[100], n, i, key;
    int low, high, mid;
    scanf("%d", &n);
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);
    scanf("%d", &key);
    low = 0;
    high = n - 1;
    while(low <= high)
    {
        mid = (low + high) / 2;
        if(a[mid] == key)
        {
            printf("Element found at index %d", mid);
            return 0;
        }
        else if(key < a[mid])
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    printf("Element not found");
    return 0;
}

//Transpose Matrix

#include <stdio.h>

int main()
{
    int a[10][10], t[10][10];
    int r, c, i, j;
    scanf("%d %d", &r, &c);
    for(i = 0; i < r; i++)
        for(j = 0; j < c; j++)
            scanf("%d", &a[i][j]);
    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            t[j][i] = a[i][j];
        }
    }
    for(i = 0; i < c; i++)
    {
        for(j = 0; j < r; j++)
            printf("%d ", t[i][j]);
        printf("\n");
    }
    return 0;
}

//Matrix Multiplication

#include <stdio.h>

int main()
{
    int a[10][10], b[10][10], c[10][10];
    int r1, c1, r2, c2;
    int i, j, k;

    scanf("%d %d", &r1, &c1);

    for(i = 0; i < r1; i++)
        for(j = 0; j < c1; j++)
            scanf("%d", &a[i][j]);

    scanf("%d %d", &r2, &c2);

    for(i = 0; i < r2; i++)
        for(j = 0; j < c2; j++)
            scanf("%d", &b[i][j]);
            
    if(c1 != r2)
    {
        printf("Multiplication not possible");
        return 0;
    }
    for(i = 0; i < r1; i++)
    {
        for(j = 0; j < c2; j++)
        {
            c[i][j] = 0;
            for(k = 0; k < c1; k++)
            {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    for(i = 0; i < r1; i++)
    {
        for(j = 0; j < c2; j++)
            printf("%d ", c[i][j]);
        printf("\n");
    }
    return 0;
}