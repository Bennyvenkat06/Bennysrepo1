// // #include <stdio.h>
// // int main() {
// //     printf("Hello, World!\n");
// //     return 0;
// // }
// #include <stdio.h>

// int main(void) {
//     float a, b, c, Avg;
//     printf("enter your first number: ");
//     scanf("%f", &a);
 
//     printf("enter your second number: ");
//     scanf("%f", &b);

//     printf("enter your Third number: ");
//     scanf("%f", &c);

//     Avg = (a+b+c)/3;

//     printf("The average of three numbers %.3f, %.3f and %.3f is eaqual to %.3f: ", a, b, c, Avg);




// }
#include <stdio.h>
int main(void) {
    char issunday=1, issnowing=1, issaturday=1, israining=1;
    printf("Answer to the following Questions Appropriately: Y for YES and N for NO.\n");
    
    printf("Is today Sunday?? ");
    scanf(" %c", &issunday);
    printf("Is it Snowing?? ");
    scanf(" %c", &issnowing);

        if(issunday == 'Y' && issnowing == 'Y' ){
            printf("Rest at Home! Because it's Chilling Out!!");
        }
    else 
        if(issunday == 'N' && issnowing == 'N'){
            printf("The weather is clear today....Ready to Go?!");
        }
     else//{  
    //         printf("Invalid Entry!! Enter the valid answers....");
    //     }
     /*else{
    //         printf("It is the way it is, if wanna go the you can Go....");
    //     }*/
        if((issunday == 'Y' && issnowing == 'N') || (issunday == 'Y' && issnowing == 'N')){
            printf("It is the way it is, if wanna go the you can Go....");
        /*The way of using Logical "OR" operator!*/
        }
    else  
        if((issunday !='Y') && ( issnowing != 'N') || (issunday !='N') && ( issnowing != 'Y') ) { 
            printf("ERROR!!! >>>>Please enter your Answers in Correct way, which is either Y/N. Try Again!!>>>>");
            }
    // scanf("%c", );
}




