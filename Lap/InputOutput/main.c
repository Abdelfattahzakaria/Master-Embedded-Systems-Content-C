/*
 * main.c
 *
 *  Created on: Nov 6, 2024
 *      Author: abdelfattahzakariaelbadry@gmail.com    
 */

/**********************************************************************************

                                     Input Output Data

***********************************************************************************/

#include <stdio.h>

int main(void){

printf("Input Output Data\n");
printf("Hello World \t\t From ES\n");
printf("Hello World \\ From ES\n");
printf("Hello World \\n From ES\n");
printf("Hello World From ES\"\n");

// **********************************************************************************
short signed int num= 50;
float pi= 76983.149809809;

printf("num= %hd\n" , num);
printf("pi= %f\n" , pi);
printf("pi= %.3f\n" , pi);
printf("pi= %4.2f\n" , pi);
printf("num= %hd , pi= %f\n" , num , pi);

//***********************************************************************************
short unsigned int number;
float number2;
printf("enter integer value\n");
fflush(stdin); fflush(stdout);
scanf("%hu" , &number);
printf("the number is: %hu\n" , number);

printf("enter the fnum\n");
fflush(stdin); fflush(stdout);
scanf("%hu", &number);
printf("enter the snum\n");
fflush(stdin); fflush(stdout);
scanf("%f", &number2);
printf("fnum*snum= %f , fnum/snum= %f\n" , number*number2 , number/number2);

return 0;
}

