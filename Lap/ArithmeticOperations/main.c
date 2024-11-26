/*
 * main.c
 *
 *  Created on: Nov 6, 2024
 *      Author: abdelfattahzakariaelbadry@gmail.com    
 */

/**********************************************************************************

                                     Arithmetic Operations

***********************************************************************************/

int main(void){

char num= 5 , num2= 3;
printf("num * num2= %c\n" , num * num2);
printf("num / num2= %c\n" , num / num2);
printf("num + num2= %c\n" , num + num2);
printf("num - num2= %c\n" , num - num2);
printf("num % num2= %c\n" , num % num2);

//**********************************************************************************
short unsigned int a= 50 , b_i= 30;
signed char b_c= 20;
float b_f= 30.0;
printf("a + b_i=  /'Integer Value/'%d\n" , a + b_i);
printf("a + b_f= %d /'Float Value/'\n" , a + b_f);
printf("a - b_c= %d /'Char Value/'\n" , a + b_c);

//**********************************************************************************
signed char numa= 15;
short signed int numb= 3;
float numc= 3.0;
char val;
short unsigned int val2;
printf("numa / numb= %d\n" , numa / numb);
printf("numa / numc= %f\n" , numa / numc);

val= numa / (char)numb;
val2= numa / (short unsigned int)numc;
printf("val= %c\n" , val);
printf("val2= %hu\n" , val2);

//************************************************************************************
short unsigned int value2= 30;
short unsigned int res , res2;
res= value2++;
res2= value2;
printf("res= %hu , res2= %hu\n" , res , res2);

res= ++value2;
res2= value2;
printf("res= %hu , res2= %hu\n" , res , res2);

res= value2--;
res2= value2;
printf("res= %hu , res2= %hu\n" , res , res2);

res= --value2;
res2= value2;
printf("res= %hu , res2= %hu\n" , res , res2);

/*******************************************************************************************

   Operations Priority: () -->> * -->> / -->> %  -->> + -->> - -->> = From Left 2 Right

 */

return 0;
}

