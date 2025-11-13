// //Q1
// // // empid 7 spaces, empname 27 spaces right aligned, empsalary 3 decimals, 
// #include<stdio.h>
// int main(){
//     int empid;
//     char empname[100];
//     float empsal;

//     printf("Enter Employee ID: ");
//     scanf("%d", &empid);
//     printf("Enter Employee Name: ");
//     scanf("%s", empname);
//     printf("Enter Employee Salary: ");
//     scanf("%f", &empsal);


//     printf("The Employee %7s \n bearing the Employee I.D. %-7d will \nhave the salary %.3f.\n", empname, empid, empsal);

// return 0;
// }



// (Homework set 1)  METHOD 1------------------------------------------------
// #include<stdio.h>
// #include<math.h>

// #define PI 3.141459

// void APofRect(float L, float B);
// void ACofCir(float R);

// void APofRect(float L, float B ){
//     float area=L*B;
//     float peri= 2*(L+B);
//      printf("The Area of Rectangle: %.2f  \n\n", area);
//      printf("The Perimeter of Rectangle: %.2f  \n\n", peri);
//  }

// void ACofCir(float R){
//     float area=PI*R*R;
//     float circum=2*PI*R;
//     printf("The Area of Circle: %.2f  \n\n", area);
//     printf("The Circumference of Circle: %.2f  \n\n", circum);
// }

// int main(){

//     float l, b, r;

//     printf("Enter Lenght, Breadth of the Rectangle and Radius of Circle: ");
//     scanf("%f %f %f", &l, &b, &r);
// printf("\n\n");
//     printf("-------Here is the answer--------\n\n\n");
//     APofRect(l,b);
//     ACofCir(r);

//    return 0; 
// }




// METHOD 2---------------------------------

// #include<stdio.h>

// float pi=3.14159;

// float AreaofRect(float l, float b){
//     float area = l*b;
//     return area;
// }

// float periofRect(float l, float b){
//     float peri = 2*(l+b);
//     return peri;
// }

// float AreaofCircle(float R){
//     float area = pi*R*R;
//     return area;
// }

// float circumofCircle(float R){
//     float circum = 2*pi*R;
//     return circum;
// }

// int main(){
    
//     float l,b,r;

//     printf("Enter lenght breadth and radius: ");
//     scanf("%f %f %f", &l, &b, &r);

// printf("\n\n");

//     printf("The Area of Rectangle is: %.2f ", AreaofRect(l, b));
//           printf("\n");
//     printf("Prerimeter pf Rectangle is:  "); periofRect(l, b);
          
// printf("\n\n");

//     printf("The Area of Circle is: %.2f ", AreaofCircle(r));
//           printf("\n");      
//     printf("Perimeter of Circle is: %.2f ", circumofCircle(r)); 

// printf("\n\n");



// return 0;
// }




// Q1 sirs
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

// Q3
// #include<stdio.h>

// int main(){

// long int tok, ld;
// printf("Enter Token number: ");
// scanf("%d", &tok);

//  ld=tok%10;

// if((ld%2)==0){
//     printf("Enter through Gate A!");
// }else {
    
//     printf("Enter through Gate B!");
// }



// return 0;
// }


// Q4  
// #include<stdio.h>

// int main(){
//     int n;
//     printf("Enter the number:");
//     scanf("%d", &n);

//       for(int i=1; i<=n; i++)
//       {
//         printf("%dth table is:\n", i);
        
//         for(int j=1; j<=20; j++){

//             printf("%4d*%4d=%4d", i, j, i*j);
//                 printf("\n");
//         }
        
//         printf("\n\n");
      
//     }

// return 0;
// }



// Q8
// #include<stdio.h>

// float ToFahrenhiet(float fah){
//     float f=(fah*9/5)+32; 
//     return f;
// }

// float ToKelvin(float kel){
//     float  k=kel+273.15;
//     return k;
// }

// int main(){
//     float cel;
//     printf("Enter the temperature in Celsius(°C): ");
//     scanf("%f", &cel);

//       printf("Temperature in Fahrenhiet: %.2f°F \n", ToFahrenhiet(cel));
//       printf("Temperature in Kelvin: %.2fK\n", ToKelvin(cel));
 

// return 0;
// }



//Q10
// #include<stdio.h>
// int main(){
//    float amt, disount, tax;

// }



