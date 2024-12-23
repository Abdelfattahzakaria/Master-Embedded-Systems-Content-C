/*
 * main.c
 *
 *  Created on: Nov 6, 2024
 *      Author: abdelfattahzakariaelbadry@gmail.com
 */

/**********************************************************************************

                                     Bit Manipulation

 ***********************************************************************************/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int main(void)
{
	short unsigned int num= 16 , bits= (sizeof(short unsigned int) * 8) - 1;
	/*
	                (16)10                   ------------>> (0......0000010000)2
	 */

	//*****************************************************************************************
	//*****************************************************************************************
	if(num & 1)
		printf("within num: %hu LSB is: 1\n" , num);
	else
		printf("within num: %hu LSB is: 0\n" , num);


	//*****************************************************************************************
	//*****************************************************************************************
	printf("--------------------------------------------------------\n");
	if(num & (1 << bits))
		printf("within num: %hu MSB is: 1\n" , num);
	else
		printf("within num: %hu MSB is: 0\n" , num);


	//*****************************************************************************************
	//*****************************************************************************************
	printf("--------------------------------------------------------\n");
	num|= (1 << 3);
	/*
	            (16)10                        ------------>> (0......0000010000)2
	            (0......0000011000)2          ------------>> (24)10
	 */
	printf("num: %hu after set bit 3\n" , num);


	//*****************************************************************************************
	//*****************************************************************************************
	printf("--------------------------------------------------------\n");
	num&= ~ (1 << 3);
	/*
	            (16)10                        ------------>> (0......0000010000)2
	            (0......0000010000)2          ------------>> (16)10
	 */
	printf("num: %hu after reset bit 3\n" , num);


	//*****************************************************************************************
	//*****************************************************************************************
	printf("--------------------------------------------------------\n");
	num^= (1 << 4);
	/*
	            (16)10                        ------------>> (0......0000010000)2
	            (0......0000000000)2          ------------>> (0)10
	 */
	printf("num: %hu after toggle bit 3\n" , num);

	num|= (1 << 4);
	printf("num: %hu after set bit 3\n" , num);


	//*****************************************************************************************
	//*****************************************************************************************
	printf("--------------------------------------------------------\n");
	unsigned char bit3= (num >> 3) & 1;
	/*
	            (16)10                        ------------>> (0......0000010000)2
	            (0......0000010000)2          ------------>> (0)10
	 */
	printf("within num: %hu 3th bit: %d\n" , num , bit3);


	return 0;
}



