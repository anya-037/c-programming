
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


//1 Print Numbers from 1 to N
#include <stdio.h>
void print(int n){
    if (n==0)
        return;
    print(n-1);
    printf("%d\n", n);
}
int main(){
    int n=5;
    print(n);
    return 0;
}

*/

//2 Prime number
#include <stdio.h>
int prime(int n,int i)
{
    if (i==n){
        return 1;
    }

    if (n%i==0){
        return 0;
    }
    return prime(n,i + 1);
}

int main()
{
    int n;
    scanf("%d", &n);
    if (n < 2){
        printf("Not Prime");
    }
    else if (prime(n, 2)){
        printf("Prime");
    }
    else{
        printf("Not Prime");
    }
    return 0;
}


//3 Factorial
#include <stdio.h>
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


//4 Fibonacci
#include <stdio.h>
int fib(int n) {
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    return fib(n-1)+fib(n-2);
}


int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("%d ",fib(i));
    }
    return 0;
}


//5 Even numbers
#include <stdio.h>
void even(int n)
{
    if(n==0)
    {
        return;
    }
    even(n-1);
    if (n%2==0)
    {
        printf("%d ",n);
    }
}


int main()
{
    int n;
    scanf("%d",&n);
    even(n);
    return 0;
}

//6 Odd Numbers
#include <stdio.h>
void odd(int n)
{
    if(n==0)
    {
        return;
    }
    odd(n-1);
    if (n%2!=0)
    {
        printf("%d ",n);
    }
}


int main()
{
    int n;
    scanf("%d",&n);
    odd(n);
    return 0;
}


//7 Sum from 1 to N
#include <stdio.h>
int sum(int n)
{
    if (n == 0)
    {
        return 0;
    }
    return n + sum(n - 1);
}



int main()
{
    int n;
    scanf("%d", &n);
    printf("%d", sum(n));
    return 0;
}


//8 X raised to power N
#include <stdio.h>
int power(int n)
{
    if (n == 0)
    {
        return 0;
    }
    return n + sum(n - 1);
}



int main()
{
    int n;
    scanf("%d", &n);
    printf("%d", sum(n));
    return 0;
}


//9 Sum of digits of a number
#include <stdio.h>
int sum(int n)
{
    if (n == 0)
    {
        return 0;
    }
    return n % 10 + sum(n / 10);
}

int main()
{
    int n;
    scanf("%d", &n);
    printf("%d", sum(n));
    return 0;
}

//10 Reverse a string
void reverseString(char* s, int sSize) {
    int start = 0;
    int end = sSize - 1;

    while (start < end) {
        char temp = s[start];
        s[start] = s[end];
        s[end] = temp;

        start++;
        end--;
    }
}
