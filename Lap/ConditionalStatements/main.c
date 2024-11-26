/*
 * main.c
 *
 *  Created on: Nov 6, 2024
 *      Author: abdelfattahzakariaelbadry@gmail.com    
 */

/**********************************************************************************

                                     Conditional Statements

 ***********************************************************************************/

#include <stdio.h>

int main(void){

	/************************************************************************************

                                           If Statement

	 ************************************************************************************/
	short unsigned int a , b , c , d;
	printf("enter four numbers\n");
	fflush(stdin); fflush(stdout);
	scanf("%hu %hu %hu %hu", &a , &b , &c , &d);
	printf("%hu , %hu , %hu , %hu\n", a , b , c , d);

	//**************************************************************
	if(a > b) printf("a is greater than b\n");

	//**************************************************************
	if(b <= c){
		printf("b <= c\n");
	}
	//**************************************************************
	if((a < b) && (b > c)){
		printf("(a < b) && (b > c)\n");
	}
	//**************************************************************
	if(a > b) printf("a > b\n");
	else printf("b > a\n");
	//**************************************************************
	if(a > b){
		printf("a > b\n");}
	else{
		printf("b > a\n");
	}
	//**************************************************************
	unsigned char op;
	printf("enter the operation operator\n");
	fflush(stdin); fflush(stdout);
	scanf("%c" , &op);
	if(op == '+'){
		printf("the summation= %hu\n", a + b + c + d);
	}
	else if(op == '-'){
		printf("the subtraction= %hu\n", a - b - c - d);
	}
	else if(op == '*'){
		printf("the multiply value= %hu\n", a * b * c * d);
	}
	else{
		printf("invalid passing operator\n");
	}
	//**************************************************************
	if(a > b){
		if(a > c) printf("the max among 3 values is a: %hu\n" , a);
		else printf("the max among 3 values is c: %hu\n" , c);
	}
	else if(b > c) printf("the max among 3 values is b: %hu\n" , b);
	else printf("the max among 3 values is c: %hu\n" , c);
	//**************************************************************
	short unsigned int num= a > b? a : b;
	printf("num= %hu\n", num);
	//**************************************************************

	/************************************************************************************

                                           Switch Statement

	 ************************************************************************************/
	printf("enter the operation operator a , s , m\n");
	fflush(stdin); fflush(stdout);
	scanf("%c" , &op);
	switch(op){

	case 'a': {		printf("the summation= %hu\n", a + b + c + d);
	break;
	}
	case 's': {
		printf("the summation= %hu\n", a - b - c - d);
		break;
	}
	case 'm': {
		printf("the summation= %hu\n", a * b * c * d);
		break;
	}
	default:{
		printf("invalid passing operator\n");
	}

	}
    //*************************************************************
	printf("enter the operation operator a , s , m\n");
	fflush(stdin); fflush(stdout);
	scanf("%c" , &op);
	switch(op){

	case 'A':
	case 'a': {		printf("the summation= %hu\n", a + b + c + d);
	break;
	}
	case 'S':
	case 's': {
		printf("the summation= %hu\n", a - b - c - d);
		break;
	}
	case 'M':
	case 'm': {
		printf("the summation= %hu\n", a * b * c * d);
		break;
	}
	default:{
		printf("invalid passing operator\n");
	}

	}
	return 0;
}
