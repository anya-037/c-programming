
//Base Condition
//A programming technique or function which calling itself again and again until specific condition met.
/*
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
*/


/*
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
*/

#include<stdio.h>
/*
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
*/

/*
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
*/

#include<stdio.h>
/*
int fact(int n){
    if(n==1)
    {
        return 1;
    }
    return n*fact(n-1);
}
    */
int main(){
    int n;
    scanf("%d",&n);
    int ans = 1;
    for(int i=1;i<=n;i++){
        ans = ans*i;
    }
    printf("%d",ans);
}