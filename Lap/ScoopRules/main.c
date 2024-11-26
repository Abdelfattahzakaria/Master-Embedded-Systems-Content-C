/*
 * main.c
 *
 *  Created on: Nov 6, 2024
 *      Author: abdelfattahzakariaelbadry@gmail.com    
 */

/**********************************************************************************

                                    Scoop Rules

 ***********************************************************************************/

#include <stdio.h>
#include <string.h>
#include <math.h>


//**************************************************************************
//**************************************************************************
short unsigned int X_GLOBAL_INT;
unsigned char X_GLOBAL_CHAR;
float X_GLOBAL_FLOAT;
double X_GLOBAL_DOUBLE;
short unsigned int *X_GLOBAL_INT_POINTER;


//**************************************************************************
//**************************************************************************
short signed int sum(short signed int fnum , short signed int snum){
	return fnum + snum;
}


//**************************************************************************
//**************************************************************************
/*
 When a function is marked as inline, it instructs the compiler to attempt to replace
 the function call with the function code directly. However, some compilers need the
 inline function to be defined in the same file where it is called
 (or included as a static inline in a header file).
 */
static inline short unsigned int sum_inline(short unsigned int fnum , short unsigned int snum){
	return fnum + snum;
}


//**************************************************************************
//**************************************************************************
void local_variable_func(void){
	short unsigned int x= 30;
	printf("x from local_variable_func= %hu\n" , x);
	return;
}


//**************************************************************************
//**************************************************************************
void func(void){
	short unsigned int x= 50;
	printf("x from func outside the block= %hu\n" , x);
	{
		printf("x from func inside the block= %hu\n" , x);
	}
	return;
}


//**************************************************************************
//**************************************************************************
void func2(void){
	//printf("x from func outside the block= %hu\n" , x); ------->> Error
	{
		short unsigned int x= 40;
		printf("x from func2 inside the block= %hu\n" , x);
	}
	return;
}


//**************************************************************************
//**************************************************************************
void func3(void){
	{
		short unsigned int x= 20;
		printf("x from func3 inside the block= %hu\n" , x);
	}
	//printf("x from func3 outside the block= %hu\n" , x); ------->> Error
	return;
}


//**************************************************************************
//**************************************************************************
void func4(void){
	{
		short unsigned int x= 80;
		printf("x from func4 inside the block= %hu\n" , x);
	}
	{
		//printf("x from func4 outside the block= %hu\n" , x); ------->> Error
	}
	return;
}


//**************************************************************************
//**************************************************************************
void func5(void){
	{
		short unsigned int x= 15;
		printf("x from func5 inside the block= %hu\n" , x);
	}
	{
		short unsigned int x= 30;
		printf("x from func5 inside the block= %hu\n" , x);
	}
	return;
}


//**************************************************************************
//**************************************************************************
void func6(void){
	short unsigned int x= 35;
	{
		short unsigned int x= 3;
		printf("x from func6 inside the block= %hu\n" , x);
	}
	{
		short unsigned int x= 5;
		printf("x from func6 inside the block= %hu\n" , x);
	}
	{
		short unsigned int x= 8;
		printf("x from func6 inside the block= %hu\n" , x);
	}
	printf("x from func6 outside the block= %hu\n" , x);
	return;
}


//**************************************************************************
//**************************************************************************
void func7(void){
	short unsigned int x= 45;
	{
		short unsigned int x= 9;
		printf("x from func7 inside the block= %hu\n" , x);
	}
	{
		short unsigned int x= 2;
		printf("x from func7 inside the block= %hu\n" , x);
	}
	{
		printf("x from func7 inside the block= %hu\n" , x);
	}
	printf("x from func7 outside the block= %hu\n" , x);
	return;
}


//**************************************************************************
//**************************************************************************
void func8(void){
	short unsigned int x= 80;
	printf("x from func8= %hu\n" , x);
	return;
}


//**************************************************************************
//**************************************************************************
void func9(void){
	short unsigned int x= 70;
	printf("x from func9= %hu\n" , x);
	return;
}


//**************************************************************************
//**************************************************************************
void print_global_variable_init_values(void){
	printf("Print global variable values from print_global_variable_init_values func:\n");
	printf("X_GLOBAL_INT= %hu\n" , X_GLOBAL_INT);
	printf("X_GLOBAL_CHAR= %d\n" , X_GLOBAL_CHAR);
	printf("X_GLOBAL_FLOAT= %f\n" , X_GLOBAL_FLOAT);
	printf("X_GLOBAL_DOUBLE= %lf\n" , X_GLOBAL_DOUBLE);
	printf("X_GLOBAL_INT_POINTER address= %p\n" , (void*)X_GLOBAL_INT_POINTER);

	return;
}


//**************************************************************************
//**************************************************************************
void func_global(void){
	X_GLOBAL_INT= 30;
	printf("global variable X_GLOBAL_INT from func_global= %hu\n" ,
			X_GLOBAL_INT);
	return;
}
void func_global2(void){
	short unsigned int X_GLOBAL_INT= 50;
	printf("local variable X_GLOBAL_INT from func_global2= %hu\n" ,
			X_GLOBAL_INT);
	return;
}


//**************************************************************************
//**************************************************************************


void initialize_global_variables(void){
     X_GLOBAL_INT= 50;
     X_GLOBAL_CHAR= 'a';
     X_GLOBAL_FLOAT= 30.00;
     X_GLOBAL_DOUBLE= 50.00;
     X_GLOBAL_INT_POINTER= &X_GLOBAL_INT;

	return;
}



int main(void){

	short unsigned int fnum= 20 , snum= 30;
	printf("%hu\n" , sum(fnum , snum));

	printf("%hu\n" , sum_inline(fnum , snum));
	printf("\n");


	//**************************************************************************
	//**************************************************************************
	local_variable_func();
	//printf("x from main= %hu\n" , x);  ----->> Error
	printf("\n");


	//**************************************************************************
	//**************************************************************************
	func();
	printf("\n");


	//**************************************************************************
	//**************************************************************************
	func2();
	printf("\n");


	//**************************************************************************
	//**************************************************************************
	func3();
	printf("\n");


	//**************************************************************************
	//**************************************************************************
	func4();
	printf("\n");


	//**************************************************************************
	//**************************************************************************
	func5();
	printf("\n");


	//**************************************************************************
	//**************************************************************************
	func6();
	printf("\n");


	//**************************************************************************
	//**************************************************************************
	func7();
	printf("\n");


	//**************************************************************************
	//**************************************************************************
	func8();
	func9();
	printf("\n");


	//**************************************************************************
	//**************************************************************************
	printf("Print global variable values from main func:\n");
	printf("X_GLOBAL_INT= %hu\n" , X_GLOBAL_INT);
	printf("X_GLOBAL_CHAR= %d\n" , X_GLOBAL_CHAR);
	printf("X_GLOBAL_FLOAT= %f\n" , X_GLOBAL_FLOAT);
	printf("X_GLOBAL_DOUBLE= %lf\n" , X_GLOBAL_DOUBLE);
	printf("X_GLOBAL_INT_POINTER address= %p\n" , (void*)X_GLOBAL_INT_POINTER);
	printf("\n");

	print_global_variable_init_values();
	printf("\n");


	//**************************************************************************
	//**************************************************************************
	func_global();
	printf("\n");

	func_global2();
	printf("\n");


	//**************************************************************************
	//**************************************************************************
	initialize_global_variables();

	print_global_variable_init_values();


	return 0;
}


