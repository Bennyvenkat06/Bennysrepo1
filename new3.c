#include<stdio.h>
#include<string.h>

int main(){
    char s1[100],s2[100],s3[100];

    printf("Enter first string:\n");
    scanf("%s", s1);
    fflush(stdin);
    
    printf("Enter second string:\n");
    gets(s2);

    printf("ENter the third string :");
    scanf("%[^x]",s3);/// the new way of takig input. 
    
    printf("First srting is %s", s1);
    printf("\n");

    printf("second string is :");
    puts(s2);

    printf("third string is \n ");
    printf("\n");
    for(int i=0;i<strlen(s3);i++)// using Strlen() function for indexing.
    printf("%c", s3[i]);
}