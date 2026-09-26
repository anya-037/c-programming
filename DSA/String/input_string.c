
/*
//string
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    char n;
    printf("Enter the element: ");
    fgets(n,sizeof(n),stdin);
    printf("The elements are: ",n);
    return 0;
}


#include <stdio.h>

int main(){
    char arr[100];
    char *ptr = arr;
    printf("Enter your full name: ");
    scanf("%[^\n]", arr);
    printf("Your full name is: %s", ptr);
    return 0;
}



//DATE = 10/09/2026

//string / mutable / immutable
// char type array cause C doesn't have string
#include <stdio.h>
char name[]="hello";
char name[100]="hello world";
//modification
name[2]='w';

for(int i=0;i<6;i++){
    printf("%s",name[i]);
}
char name[10]={'h','e','l','l','o'.'\n'}; //literal declarataion in c

char *ptr="hello world"
ptr[0]='t';

#include <string.h>
strcpy();
strcmp();    char a1 = "hello" char a2[]="hello";
                printf("%zu",strcmp(a1==a2));
strlen();
strcat();

#include <stdio.h>
#include <string.h>
#include <stdlib.h>


char arr[10] = "hello"
char arr[10] = "world";
printf("%s",strcat(arr1+arr2))


int main(){
    char greetings[]="hello world";
    printf("%s",greetings);
}


//%s = whole string (char array)
//%c = single character

int main(){
    char greetings[]="hello world";
    printf("%c",greetings[0]);
}



int main(){
    char greetings[] = "hello world";
    greetings[1] = 'l';
    printf("%s", greetings);
    return 0;
}


#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){ //hard code
char carName[] = "Toyota";
int i;
for(i=0;i<6;i++){
    printf("%c\n",carName[i]);
}
return 0;
}


int main(){
    char carName[] = "Volvo"; //sustainable code
    int length = sizeof(carName) / sizeof(carName[0]);
    for(int i=0;i<length;i++){
        printf("%c\n",carName[i]);
    }
    return 0;
}
*/

//char greetings[] = "Hello World";
//char greetings[] = {'h','e','l','l','o','\0'};
