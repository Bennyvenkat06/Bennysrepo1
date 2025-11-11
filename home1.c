// //Q6
#include<stdio.h>
int main(){
    float w1, w2, w3;
    printf("Enter the three weights: ");
    scanf("%f %f %f", &w1, &w2, &w3);

    if(w1>=w2 && w1>=w3){
        printf("Section A is more Heaviest which is %.2f\n", w1);
    } else if(w2>=w1 && w2>=w3){
        printf("Section B is more Heaviest which is %.2f\n", w2); 
    } else if(w3>=w1 && w3>=w2){
        printf("Section C is more Heaviest which is %.2f\n", w3); 
    }
printf("\n\n");
    printf("Checking for equal or duplicate weights: \n\n");
 
    if(w1 == w2 ){
        printf("the weight A is equal to weight B");
    }else if(w2==w3 || w2==w1){
        printf("the weight B is equal to weight C");
    }else {
        printf("the weight C is equal to weight A");
    }

return 0;
}


































// #include <stdio.h>

// int main()
// {
//     int a,b,c;
//     scanf("%d %d %d",&a,&b,&c);
    
//     if(a>b && a>c)
//     {
//         printf("A is the Greatest");
//     }
//     else if(b>a && b>c)
//     {
//         printf("B is the Greatest");
//     }
//     else
//     {
//         printf("c is the greatest");
//     }
    
    
//     if(a==b || a==c )
//     {
//         printf("Product A has duplicate data");
//     }
//     else if(b==a || b==c)
//     {
//         printf("Product B has duplicate data");
//     }
//     else if(c==a || c==b)
//     {
//         printf("Product c");
//     }
//     return 0;
// }



//funtiontype funtionname()
// {

// }