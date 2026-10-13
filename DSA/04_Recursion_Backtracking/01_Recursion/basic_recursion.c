
//Base Condition
//A programming technique or function which calling itself again and again until specific condition met.

//Stack Overflow
#include <stdio.h>
int n = 1000;
void func1(){
    printf("Happy Birthday!!!\n");
}
int main(){
    for(int i = 0; i < n; i++){
        printf("Days left for birthday: %d\n",n-i-1);
    }
    func1();
    return 0;
}

#include <stdio.h>
void func2(int n){
    if(n==0){
        return;
    }
    printf("%d\n",n);
    func2(n-1);
}
int main(){
    func2(5);
    return 0;
}


#include<stdio.h>

void nNumber(int n){
    for (int i=n;i>0;i--){
        printf("%d",i);
    }
}

int main(){
    int n=56;
    nNumber(n);
    return 0;
}

void print(int num,int N){
    if(num==N)
        return;
        printf("%d\n",num);
        print(num+1,N);
}

int main(){
    int N=10;
    int num=1;
    print(num,N);
    return 0;
}

#include<stdio.h>

int fact(int n){
    if(n==1)
    {
        return 1;
    }
    return n*fact(n-1);
}
    
int main(){
    int n;
    scanf("%d",&n);
    int ans = 1;
    for(int i=1;i<=n;i++){
        ans = ans*i;
    }
    printf("%d",ans);
}


//09/10/26
#include <stdio.h>
void printN(int n){
    if(n==1)
    return;
    printf("%d ",n);
    printN(n-1);
}
int main(){
    int n=5;
    printN(n);
    return 0;
}



#include <stdio.h>

void quicksort(int arr[], int low, int high)
{
    if (low < high)
    {
        int i = low, j = high;
        int temp;

        while (i < j)
        {
            while (i < j && arr[i] <= arr[j])
                j--;

            if (i < j)
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
                i++;
            }

            while (i < j && arr[i] <= arr[j])
                i++;

            if (i < j)
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
                j--;
            }
        }

        quicksort(arr, low, i - 1);
        quicksort(arr, i + 1, high);
    }
}

int main()
{
    int arr[] = {5, 3, 8, 2, 7};
    int n = 5;

    quicksort(arr, 0, n - 1);

    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}
