#include <stdio.h>
int main(){
    float n ;
    printf("enter the number:");
    scanf("%f", &n);

    printf("\n\n");
printf("listof numbers:");
    int i=0;
    while (i<=n){
         printf("%d\n", i);
         i++;
    }

    //    for(float i=0; i<=n; i++){
    //     printf("%.2f\n", i);
    //    }

    //    int i=0;
    //    do{
    //     printf("%d", i);
    //     i--;
    //    } while (i>=(-6));
     
    


return 0;}