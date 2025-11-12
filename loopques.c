// the first Question 
#include <stdio.h>
#include <math.h>
int main(){
    int n;
    printf("Enter a Natural Number:");;
    scanf("%d", &n);
    int sum=0;
    
    if (n>0)    {  
       
       for (int i=1; i <= n; i++)
       {
        sum+=i;
        }
        printf("The Sum  is %d\n", sum);
       
       
    } else{
        printf("The Number is not a Natural Number!!!");
    }
    





}