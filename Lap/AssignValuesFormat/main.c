/*
 * main.c
 *
 *  Created on: Nov 6, 2024
 *      Author: abdelfattahzakariaelbadry@gmail.com    
 */

/**********************************************************************************

                                      Assign Values Format

***********************************************************************************/

#include <stdio.h>

int main(void){

//                                       long , unsigned
unsigned int num2;
long unsigned int num3;
float num4;

num2= 50u;
num3= 70lu;

printf("num2= %u\n" , num2);
printf("num3= %lu\n" , num3);


num2= 80u;
printf("num2= %u\n" , num2);

num2= 0x9a;
printf("num2= %u\n" , num2);
printf("num2= %x\n" , num2);

num2= 052;
printf("num2= %u\n" , num2);
printf("num2= %o\n" , num2);

num2= 0b101;
printf("num2= %u\n" , num2);

num4= 95800000.0;
printf("num4= %f\n" , num4);

num4= 9.58e5;
printf("num4= %f\n" , num4);

num4= 0.00958;
printf("num4= %f\n" , num4);

num4= 0.958e-2;
printf("num4= %f\n" , num4);

return 0;
}
