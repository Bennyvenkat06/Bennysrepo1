// // empid 7 spaces, empname 27 spaces right aligned, empsalary 3 decimals, 
#include<stdio.h>
int main(){
    int empid;
    char empname[100];
    float empsal;

    printf("Enter Employee ID: ");
    scanf("%d", &empid);
    printf("Enter Employee Name: ");
    scanf("%s", empname);
    printf("Enter Employee Salary: ");
    scanf("%f", &empsal);


    printf("The Employee %7s \n bearing the Employee I.D. %-7d will \nhave the salary %.3f.\n", empname, empid, empsal);

return 0;
}



























// #include<stdio.h> //header files

// int main() //main function
// {
// //variables
// int empid;
// char empname[20];
// float empsalary;

// //input //text in scanf, & for strings as we are collecting in char array
// scanf("%d",&empid);
// scanf("%s",empname);
// scanf("%f",&empsalary);

// //print the output
// printf("%6d %-40s %.2f",empid,empname,empsalary);
// return 0;
// }
