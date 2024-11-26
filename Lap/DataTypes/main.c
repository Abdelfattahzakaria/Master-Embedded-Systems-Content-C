/*
 * main.c
 *
 *  Created on: Nov 6, 2024
 *      Author: abdelfattahzakariaelbadry@gmail.com    
 */

/**********************************************************************************

                                       Data Types

***********************************************************************************/

#include <stdio.h>

int main(void){
/***********************************************************************************

                                       Char

 ************************************************************************************/
printf("****************************************************************************\n");
printf("                                   Char DT                                   \n");
printf("****************************************************************************\n\n\n");
char a= "a";
signed char b= "b";
unsigned char c= "c";
signed char d= 95;
printf("Char a= %c\n", a);
printf("Char b= %c\n", b);
printf("Char c= %c\n", c);
printf("Char d= %c\n", d);
printf("ASCII d= %d\n", d);


/***********************************************************************************

                                       Integer

 ************************************************************************************/
printf("****************************************************************************\n");
printf("                                   Int DT                                   \n");
printf("****************************************************************************\n\n\n");
int num= 50;
int num2= -80;
signed int num3= -70;
unsigned int num4= 30;
short num5= 20;
signed short num6= -15;
unsigned short num7= 40;
long num5_= 20;
signed long num6_= -15;
unsigned long num7_= 40;
long long num8= 68;
signed long long num9= -37;
unsigned long long num10= 37;

signed int char_ascii= 95;

printf("signed int num= %d\n", num);
printf("signed int num2= %i\n", num2);
printf("signed int num3= %d\n", num3);
printf("unsigned int num4= %u\n", num4);
printf("signed short int num5= %hd\n", num5);
printf("signed short int num6= %hd\n", num6);
printf("unsigned short int num7= %hu\n", num7);
printf("signed long int num5= %ld\n", num5_);
printf("signed long int num6= %ld\n", num6_);
printf("unsigned long int num7= %lu\n", num7_);
printf("signed long long int num5= %lld\n", num8);
printf("signed long long int num6= %lld\n", num9);
printf("unsigned long long int num7= %llu\n", num10);

printf("the char ascii value= %d\n", char_ascii);
printf("the corresponding char  value= %c\n", char_ascii);


/***********************************************************************************

                                       Float DT

 ************************************************************************************/
printf("****************************************************************************\n");
printf("                                   Float DT                                   \n");
printf("****************************************************************************\n\n\n");
float degree= 58.687687687;
printf("the degree value= %f\n", degree);


/***********************************************************************************

                                       Double DT

 ************************************************************************************/
printf("****************************************************************************\n");
printf("                                   Double DT                                   \n");
printf("****************************************************************************\n\n\n");
double number= 89.67868768;
long double number2= 98.78678686;
printf("the number value= %lf\n", number);
printf("the nnumber2 value= %Lf\n", number2);


return 0;
}
