/*
 * main.c
 *
 *  Created on: Nov 6, 2024
 *      Author: abdelfattahzakariaelbadry@gmail.com    
 */

/**********************************************************************************

                                    Storage Classes

 ***********************************************************************************/

#include <stdio.h>
#include <string.h>
#include <math.h>

short unsigned int GLOBAL_COUNTER_VARIABLE= 0;

//extern short unsigned int FILE_2_GLOBAL_X;
//extern short unsgned int CALC_AVG(void);

/*
                                    File.h
 * static void auto_storage_class(void){...} ---->> visiable / useable only within fil2

 */


/************************************************************************
 ***********************************************************************/
void auto_storage_class(void){
	auto short unsigned int fnum= 30 , snum= 50;
	auto float tnum= 20;
	auto float res= (fnum * tnum) + snum;
	printf("res= %f\n" , res);

	return;
}


//********************************************************************
//********************************************************************
void register_storage_class(void){
	register short unsigned int i= 0;
	for(; i < 100; i++) printf("%hu" , i);
	printf("\n");

	return;
}


//********************************************************************
//********************************************************************
void printHello(void){
	GLOBAL_COUNTER_VARIABLE+= 1;
	printf("Hello , GLOBAL_COUNTER_VARIABLE= %hu\n" , GLOBAL_COUNTER_VARIABLE);

	return;
}

void printWelcome(void){
	static short unsigned int LOCAL_COUNTER_VARIABLE= 0;
	LOCAL_COUNTER_VARIABLE+= 1;
	printf("Welcome , LOCAL_COUNTER_VARIABLE= %hu\n" , LOCAL_COUNTER_VARIABLE);

	return;
}


int main(void){

	//********************************************************************
	//********************************************************************
	auto short unsigned int fnum= 30 , snum= 50;
	auto float tnum= 20;
	auto float res= (fnum * tnum) + snum;
	printf("res= %f\n" , res);

	auto_storage_class();


	//********************************************************************
	//********************************************************************
	for(register short unsigned int i= 0; i < 100; i++) printf("%hu" , i);
	printf("\n");

	register_storage_class();


	//********************************************************************
	//********************************************************************
	printHello();
	printHello();
	printHello();

	printf("\n");

	printWelcome();
	printWelcome();
	printWelcome();

	return 0;
}
