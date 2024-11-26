/*
 * main.c
 *
 *  Created on: Nov 6, 2024
 *      Author: abdelfattahzakariaelbadry@gmail.com    
 */

/**********************************************************************************

                                    Conversion

 ***********************************************************************************/

#include <stdio.h>

int main(void){

	/**************************************************************************

                                 Implicit

	 **************************************************************************/
	short signed int x= 5;
	float y= 3.0;
	printf("%f\n", x * y);

	short signed int num1= 15 , num2= 3;
	float num3= 5.8798;
	float res= num1 * num3 + num2;
	printf("%f\n" , res);

	short signed int a= 5;
	signed char b= 3;
	short signed int c= a * b;
	printf("%hd\n" , c);

	/**************************************************************************

                                     Explicit

	 **************************************************************************/
	short signed int x_= 5;
	float y_= 3.0;
	printf("%hd\n", (short signed int)(x_ * y_));

	short signed int num1_= 15 , num2_= 3;
	float num3_= 5.8798;
	short signed int res_= num1_ * (short signed int)num3_ + num2_;
	printf("%hd\n" , res_);

	short signed int a_= 5;
	signed char b_= 3;
	signed char c_= (signed char)a_ * b_;
	printf("%d\n" , c_);



	return 0;
}

