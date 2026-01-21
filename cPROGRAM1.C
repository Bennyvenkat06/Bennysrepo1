#include<stdio.h>

int main(){
    int i;
    int *ptr;
    int arr[8]={2,6,4,7,3,55,6,5};
    

    // for(i=0; i<8; i++){
    //     printf("a[%d]=",i);
    //     scanf("%d", ptr+i);
    //     printf("\n");
    // }

    ptr=&arr[7];

    for(i=0;i<8;i++)
    {
        printf("%d ", *(ptr-i));
    }
 
}