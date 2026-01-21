#include<stdio.h>
#include<string.h>

int main(){
    // initialization
    char s1[10]="start";
    char s2[10]="START";
    char s3[30];
    
    int x;
//strcmp
    x=strcmpi(s1,s2);
    printf("%d\n", x);
    if(x==0) printf("Both Strings are same\n");
    else printf("Both strings are not same\n");

    x=strcmp(s1,s2);
    printf("%d\n", x);
    if(x==0) printf("Both Strings are same\n");
    else printf("Both strings are not same\n");
// reverse and concat
    printf("\nreverse of S1 is : %s", strrev(s1));
    strrev(s1);
    printf("\nString after strcat is %s", strcat(s1,s2));
//string copy
    
    strcpy(s3,s1);
    printf("\nAfetr string copy s3 is: %s", s3);
}