/*
 * main.c
 *
 *  Created on: Nov 6, 2024
 *      Author: abdelfattahzakariaelbadry@gmail.com    
 */

/**********************************************************************************

                                     Memory Management

 ***********************************************************************************/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int main(void)
{

	unsigned char *ptr_ch= NULL;
	ptr_ch= (unsigned char *) malloc(4 * sizeof(unsigned char));

	if(ptr_ch == NULL) printf("Heap Is Full , target memory size out of range\n");
	else
	{
		printf("success memory allocated\n");
		free(ptr_ch);
	}



	//***********************************************************************************
	//***********************************************************************************
	printf("\n\n**************************************************************************\n");


	unsigned char *ptr_ch_= (unsigned char *) calloc(4 , sizeof(unsigned char));

	if(ptr_ch_ == NULL) printf("Heap Is Full , target memory size out of range\n");
	else
	{
		printf("success memory allocated\n");
		free(ptr_ch_);
	}



	//***********************************************************************************
	//***********************************************************************************
	printf("\n\n**************************************************************************\n");


	short unsigned int *ptr_numbers= (short unsigned int*) malloc(5 * sizeof(short unsigned int));

	if(ptr_numbers == NULL) printf("Heap Is Full , target memory size out of range\n");
	else
	{
		for(unsigned char i= 0; i <= 4; i++) ptr_numbers[i]= (i + 1) * 3;

		for(unsigned char i= 0; i <= 4; i++) printf("numbers[%hu]=  %hu\n" , i + 1 , ptr_numbers[i]);

		free(ptr_numbers);
	}



	//***********************************************************************************
	//***********************************************************************************
	printf("\n\n**************************************************************************\n");


	short unsigned int *ptr_numbers_= (short unsigned int*) malloc(5 * sizeof(short unsigned int));

	if(ptr_numbers_ == NULL) printf("Heap Is Full , target memory size out of range\n");
	else
	{
		for(unsigned char i= 0; i <= 4; i++) *(ptr_numbers_ + i)= (i + 1) * 3;

		for(unsigned char i= 0; i <= 4; i++) printf("numbers[%hu]=  %hu\n" , i + 1 , *(ptr_numbers_ + i));

		free(ptr_numbers_);
	}


	//***********************************************************************************
	//***********************************************************************************
	printf("\n\n**************************************************************************\n");


	short unsigned int *ptr_numbers__= (short unsigned int*) malloc(5 * sizeof(short unsigned int));

	if(ptr_numbers__ == NULL) printf("Heap Is Full , target memory size out of range\n");
	else
	{
		for(unsigned char i= 0; i <= 4; i++) *(ptr_numbers__ + i)= (i + 1) * 3;

		for(unsigned char i= 0; i <= 4; i++) printf("numbers[%hu]=  %hu\n" , i + 1 , *(ptr_numbers__ + i));

		short unsigned int *ptr_numbers__expanding= (short unsigned int*) realloc(ptr_numbers__ ,
				8 * sizeof(short unsigned int));

		if(ptr_numbers__expanding == NULL) printf("Heap Is Full , target memory size out of range\n");
		else
		{
			printf("address of first location before expanding: %p\n" , ptr_numbers__);
			printf("address of first location after expanding: %p\n" , ptr_numbers__expanding);

			if(ptr_numbers__ == ptr_numbers__expanding)
				printf("3 new locations are added after old block\n");
			else
				printf("allocate new block with size 8 units in heap\n");

			printf("after expand ptr_numbers__ with new 3 locations data are: \n");

			for(unsigned char i= 5; i <= 7; i++) *(ptr_numbers__expanding + i)= (i + 1) * 3;

			for(unsigned char i= 0; i <= 7; i++) printf("numbers[%hu]=  %hu\n" , i + 1 , *(ptr_numbers__expanding + i));

			free(ptr_numbers__expanding);
		}

		free(ptr_numbers__);
	}


	return 0;
}

