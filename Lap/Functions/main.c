/*
 * main.c
 *
 *  Created on: Nov 6, 2024
 *      Author: abdelfattahzakariaelbadry@gmail.com    
 */

/**********************************************************************************

                                    Functions

 ***********************************************************************************/

#include <stdio.h>
#include <string.h>
#include <math.h>

#define GET_AREA(width , length)              (width * length)
#define GET_SQUARE(x)                          x * x
#define GET_SQUARE_OPTIMIZE(x)                 (x) * (x)

#define COLUMNS                                3


/***********************************************************************
 **********************************************************************/
void printHello(void);


/***********************************************************************
 **********************************************************************/
void printWelcome(){
	printf("Welcome\n");
	return;
}


/***********************************************************************
 **********************************************************************/
short unsigned int addNums(short unsigned int fnum , short unsigned int snum){
	return fnum + snum;
}


/***********************************************************************
 **********************************************************************/
short unsigned int getMax(short unsigned int fnum , short unsigned int snum){
	if(fnum == snum) return 0;
	return ((fnum > snum)? fnum : snum);
}


/***********************************************************************
 **********************************************************************/
void sleap(){
	printf("then i'am going to sleep\n");
	return;
}

void drink(void){
	printf("and i will drink tea\t");
	return sleap();
}

void eat(void){
	printf("\n i will eat banana\t");
	return;
}


/***********************************************************************
 **********************************************************************/
void byValue(short unsigned int fnum , short unsigned int snum){
	fnum+= 5;
	snum *= 3;
	return;
}


/***********************************************************************
 **********************************************************************/
void byReference(short unsigned int *fnum , short unsigned int *snum){
	*fnum+= 5;
	*snum *= 3;
	return;
}


/***********************************************************************
 **********************************************************************/
void recursion(short unsigned int down_counter){
	printf("Hello World\n");
	down_counter--;
	if(down_counter > 0) recursion(down_counter);
	return;
}


/***********************************************************************
 **********************************************************************/
short unsigned int fact_loop(short unsigned int num){
	short unsigned int res= 1;
	for(short unsigned int i= num; i >= 2; i--) res*= i;
	return res;
}

short unsigned int fact_recursion(short unsigned int num){
	if(num == 0) return 1;
	return num * fact_recursion(num - 1);
}


/***********************************************************************
 **********************************************************************/
float get_area(float width , float length){
	return width * length;
}

float get_square(float x){
	return x * x;
}


/***********************************************************************
 **********************************************************************/
void show_arr(short unsigned int arr[] , short unsigned int rows){
	for(short unsigned int i= 0; i < rows; i++)printf("%hu\t" , arr[i]);
	printf("\n");
	return;
}


/***********************************************************************
 **********************************************************************/
void try_2_modify(short unsigned int arr[] , short unsigned int rows){
	for(short unsigned int i= 0; i < rows; i++) arr[i]*= 3;
	return show_arr(arr , rows);
}


/***********************************************************************
 **********************************************************************/
void show_2d_arr(short unsigned int arr[][COLUMNS] , short unsigned int rows){
	for(short unsigned int i= 0; i < rows; i++){
		for(short unsigned int j= 0; j < COLUMNS; j++) printf("%hu\t" , arr[i][j]);
		printf("\n");
	}
	return;
}


/***********************************************************************
 **********************************************************************/
short signed int get_min(short signed int arr[][COLUMNS] , short signed int rows){
	short signed int min= 999;
	for(short unsigned int i= 0; i < rows; i++){
		for(short unsigned int j= 0; j < COLUMNS; j++){
			if(arr[i][j] < min) min= arr[i][j];
		}
	}
	return min;
}



int main(void){

		/***********************************************************************
		 **********************************************************************/
		printHello();


		/***********************************************************************
		 **********************************************************************/
		printWelcome();


		/***********************************************************************
		 **********************************************************************/
		short unsigned int fnum , snum;
		printf("enter two numbers\n");
		fflush(stdin); fflush(stdout);
		scanf("%hu %hu" , &fnum , &snum);
		printf("the summation of %hu + %hu= %hu\n" , fnum , snum , addNums(fnum , snum));


		/***********************************************************************
		 **********************************************************************/
		printf("enter two numbers\n");
		fflush(stdin); fflush(stdout);
		scanf("%hu %hu" , &fnum , &snum);
		printf("the maximum number among %hu , %hu is: %hu\n" , fnum , snum , getMax(fnum , snum));


		/***********************************************************************
		 **********************************************************************/
		eat();
		drink();


		/***********************************************************************
		 **********************************************************************/
		printf("enter two numbers\n");
		fflush(stdin); fflush(stdout);
		scanf("%hu %hu" , &fnum , &snum);
		printf("fnum= %hu , snum= %hu\t", fnum , snum);
		byValue(fnum , snum);
		printf("after modification: fnum= %hu , snum= %hu\n", fnum , snum);


		/***********************************************************************
		 **********************************************************************/
		printf("enter two numbers\n");
		fflush(stdin); fflush(stdout);
		scanf("%hu %hu" , &fnum , &snum);
		printf("fnum= %hu , snum= %hu\t", fnum , snum);
		byReference(&fnum , &snum);
		printf("after modification: fnum= %hu , snum= %hu\n", fnum , snum);


		/***********************************************************************
		 **********************************************************************/
		recursion(5);


		/***********************************************************************
		 **********************************************************************/
		printf("factorial 5= %hu\n" , fact_loop(5));
		printf("factorial 5= %hu\n" , fact_recursion(5));


		/***********************************************************************
		 **********************************************************************/
		float width , length;
		printf("enter width , length\n");
		fflush(stdin); fflush(stdout);
		scanf("%f %f" , &width , &length);
		printf("area: %f * %f= %f\n", width , length , width * length);
		printf("area: %f * %f= %f\n", width , length , get_area(width , length));
		printf("area: %f * %f= %f\n", width , length ,  GET_AREA(width , length));
		printf("\n");

		printf("%f+3 * %f+3 = %f\n" , width , width , (width+3) * (width+3));
		printf("%f+3 * %f+3 = %f\n" , width , width , GET_SQUARE(width+3));
		printf("\n");

		printf("%f+3 * %f+3 = %f\n" , width , width , (width+3) * (width+3));
		printf("%f+3 * %f+3 = %f\n" , width , width , GET_SQUARE_OPTIMIZE(width+3));
		printf("%f+3 * %f+3 = %f\n" , width , width , get_square(width+3));


		/***********************************************************************
		 **********************************************************************/
		short unsigned int arr[]= {1 , 2 , 3 , 4 , 5};
		show_arr(arr , 5);


		/***********************************************************************
		 **********************************************************************/
		try_2_modify(arr , 5);


		/***********************************************************************
		 **********************************************************************/
		short unsigned int arr_2d[3][3]= {
				{1 , 2 , 3} ,
				{4 , 5 , 6} ,
				{7 , 8 , 9}
		};
		show_2d_arr(arr_2d , 3);


		/***********************************************************************
		 **********************************************************************/
		short signed int arr_2d_v2[3][3]= {
				{20 , 25 , 38} ,
				{49 , 57 , 60} ,
				{79, 15 , 90}
		};
		printf("minimum value= %hd\n", get_min(arr_2d_v2 , 3));


	return 0;
}

void printHello(void){
	printf("Hello\n");
	return;
}
