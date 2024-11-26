/*
 * main.c
 *
 *  Created on: Nov 6, 2024
 *      Author: abdelfattahzakariaelbadry@gmail.com    
 */

/**********************************************************************************

                                      Constants

***********************************************************************************/

#include <stdio.h>

/***********************************************************************************

                                      Define Constants Without Need To Take Memory

 */
#define label                   "Hello World From ES"
#define new_line                 "\n"
#define octa                     8
#define num                      5 * 6

int main(void){
/***************************************************************************************

                                     Define Constants By Taking Memory Places For It

 */
const short signed int num2= 7687;
const long unsigned int num3= -768;
const float pi= 3.1498080;
short signed int num_copy= num;
short unsigned int octa_copy= octa;

printf("constant num2= %hi , constant num3= %lu , constant pi= %f\n", num2 , num3 , pi);
printf("num= %d , octa= %u\n", num_copy , octa_copy);

	return 0;
}
