// // empid 6spaces, empname 10spaces left aligned, empsalary 2 decimals, 

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

//q2

// #include<stdio.h>
// int main()
// {
//     int p;
//     float rate;
//     int time;
//     float si;
// //input
//     scanf("%d %f %d",&p,&rate,&time);
//     si = (p*rate*time)/100;
//     printf("%d %.2f %d %.2f",p,rate,time,si);
//     return 0;
// }

//Q3

// #include<stdio.h>
// int main()
// {
//     int tn;
//     int digit;
//     //input
//     scanf("%d",&tn);
    
//     //calculation
//     digit = tn%10;
    
//     if(digit%2==0)
//     {
//         printf("Token %d assigned to GATEA",tn);
//     }
//     else
//     {
//         printf("Token %d assigned to GATEB",tn);
//     }
//     return 0;
// }



//Q4

// #include <stdio.h>

// int main()
// {
//     for(int i =1;i<11;i++)
//     {
//         for(int j=1;j<11;j++)
//         {
//             printf("%d ",i*j);
              
//         }
//         printf("\n");
//     }

//     return 0;
// }

// //Q6
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
// #include<stdio.h>
// void function1()

// {   
//     printf("Entered the function");
//     int a,b;
//     scanf("%d %d",&a,&b);

//     printf("%d",a*b);
// }

// int main()
// {
//     printf("Stated my execution here");
//     //fucntioname();
//     function1();
// }


//Q8
// #include <stdio.h>


// void converttoFarenhiet(float temp)
// {
//     //F = (C \times \frac{9}{5}) + 32  
//     printf("This is the Celsius value stores in temp %f \n",temp);
//     float f;
//     f = (temp*9/5)+32;
//     printf("%.2f",f);
// }


// int main()
// {
//     float c;
//     printf("enter the celsius temperature \n");
//     scanf("%f",&c);
//     printf("sending c to function \n");
//     converttoFarenhiet(c);
//     return 0;
// }


//Q10
// #include <stdio.h>



// int main()
// {
//     float price,discount,totalam,disam,totalafterdis,finalam;
//     int quan;
//     printf("enter all the values\n");
//     scanf("%f %f %d",&price,&discount,&quan);
    
//     totalam = price*quan;
//     disam = (discount/100)*totalam;
//     totalafterdis = totalam - disam;
    
//     if (totalafterdis>10000)
//     {
//         finalam = totalafterdis - ((5/100)*totalafterdis);
//     }
//     else
//     {
//         finalam = totalafterdis;
//     }
//     printf("final %.2f",finalam);
    
//     return 0;


// }



#include <stdio.h>

int sod(int num)
{
    int digit;
    int ans = 0;
    
    while (num>0)//5496//549//54//5//0
    {
        digit = num%10;//6//9//4//5
        ans = ans + digit;//6//15//19//24
        num = num/10;//549//54//5//0
    }
    
    return ans;
    
}



int main()
{
    int n, ans;
    scanf("%d",&n);
    ans = sod(n);
    printf("%d",ans);
}









