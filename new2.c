#include<stdio.h>
#include<math.h>
int main()
{
    int n,rem=0,temp, i=0;
    int arr[10];
    int *ptr;

    printf("Enter the number:");
    scanf("%d", &n);
    temp=n;
    while(temp>0){
        rem=temp%2;
        arr[i]=rem;
        i++;
        temp = temp/2;
    }

    ptr=&arr[i-1];
    for(int x=0;x<i; x++){
        printf("%d", *(ptr-x));
    }

    // for(int x=i-1; x>=0; x--)
    // printf("%d", arr[x]);

}