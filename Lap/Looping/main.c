/*
 * main.c
 *
 *  Created on: Nov 6, 2024
 *      Author: abdelfattahzakariaelbadry@gmail.com    
 */

/**********************************************************************************

                                    Looping

 ***********************************************************************************/

#include <stdio.h>

int main(void){

	/**********************************************************************************

                                   For Loop

	 */
	short signed int i;
	for(i= 0; i<= 5; i++){
		printf("i= %hd\n" , i);
	}
	//*******************************************************
	printf("**********************************************************************\n");
	printf("**********************************************************************\n");
	for(i= 5; i>= 0; i--){
		printf("i= %hd\n" , i);
	}
	//*******************************************************
	printf("**********************************************************************\n");
	printf("**********************************************************************\n");
	for(short signed int i= 0; i <= 5; i++){
		printf("i= %hd\n" , i);
	}
	//*******************************************************
	printf("**********************************************************************\n");
	printf("**********************************************************************\n");
	short signed int sum= 0;
	for(short signed q= 0; q <= 5; q++){
		sum+= q;
	}
	printf("sum= %hd\n" , sum);
	//*******************************************************
	printf("**********************************************************************\n");
	printf("**********************************************************************\n");
	short signed int stu_num;
	float degree_sum , avg , degree;
	printf("enter number of students\n");
	fflush(stdin); fflush(stdout);
	scanf("%hd" , &stu_num);
	for(short signed int q= 0; q < stu_num; q++){
		printf("enter degree of student %hd\n" , q + 1);
		fflush(stdin); fflush(stdout);
		scanf("%f" , &degree);
		degree_sum += degree;
	}
	printf("avg= %f\n" , degree_sum / stu_num);
	//*******************************************************
	printf("**********************************************************************\n");
	printf("**********************************************************************\n");
	for(signed char q= 0; q <= 5; q++);


	/**********************************************************************************

                                   While Loop

	 */
	signed char num= 0;
	while(num <= 5){
		printf("num= %d\n" , num++);
	}
	//*******************************************************
	printf("**********************************************************************\n");
	printf("**********************************************************************\n");
	signed char summation= 0;
	num= 0;
	while(num <= 5){
		summation+= num;
		printf("num= %d\n" , num++);
	}
	printf("summation= %d\n" , summation);

	/**********************************************************************************

                                 Do While Loop

	 */
	short signed int x;
	signed response;
	do{
		printf("enter the value of x to evalute: x*x + 25\n");
		fflush(stdin); fflush(stdout);
		scanf("%hd" , &x);
		x= (x * x) + 25;
		printf("result= %d\n" , x);
		printf("do you want to evaluate again?\n");
		fflush(stdin); fflush(stdout);
		scanf("%c", &response);
	}while(response == 'y');



	/**********************************************************************************

                                 Break , Continue

	 */
	for(signed char q= 0; q <= 5; q++){
		if(q == 4) continue;
		printf("%d\n" , q);
	}
	for(signed char q= 0; q <= 5; q++){
		if(q == 4) break;
		printf("%d\n" , q);
	}


	/**********************************************************************************

                                 GoTo

	 */
      signed char ch;
      printf("enter char\n");
      fflush(stdin); fflush(stdout);
      scanf("%c" , &ch);
      if(ch == 'h') goto printHello;
      else goto printWelcome;
	printHello:
	  printf("hello\n");
	  goto finish;
	  printWelcome:
	  printf("welcome\n");
	  goto finish;
	finish:
	  return 0;
}
