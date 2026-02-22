
#include <stdio.h>

/*
 * Potrfolio submission
 * Name: Sai Aung Htet Thu
 * ID: 201994436  
 */

 int main( void ) {

    // define and initialise variables for the problem data 
   float salary=36250.0;
   float NI=8.0;
   float tax=15.0;
   float tax_con;

    // calculate the deductions and final take-home salary
   float ni_con= salary* (NI/100.0);
   float sal_ni=salary-ni_con;
   if (sal_ni>12500){
      tax_con= (sal_ni-12500)*(tax/100.0);
   } else{
      tax_con=0.0;
   }
   float take_home= sal_ni-tax_con;
    // Use only these print statement with appropriate formatting and variable names
   printf("Salary £%.2f",salary);
   printf("NI contribution £%.2f", ni_con);
   printf("Tax contribution £%.2f", tax_con);
   printf("Take home salary £%.2f", take_home);

   return 0;
 }