/*
 * main.c
 *
 *  Created on: Nov 6, 2024
 *      Author: abdelfattahzakariaelbadry@gmail.com    
 */

/**********************************************************************************

                                    Arrays

 ***********************************************************************************/

#include <stdio.h>

int main(void){

	/*************************************************************************************
	 ************************************************************************************/
	short signed int arr[5]= {1 , 2 , 3 , 4 , 5};
	short signed int arr_[]= {1 , 2 , 3 , 4 , 5};
	signed char ch[5]= {'a' , 'b' , 'c' , 'd' , '\0'};
	signed char ch_[]= {'a' , 'b' , 'c' , 'd' , '\0'};

	short signed int x;
	signed char y;
	printf("%hd\n" , arr[0]);
	printf("%c\n" , ch[3]);
	x= arr_[3];
	y= ch_[4];
	printf("%hd %c\n" , x , y);
	arr_[3]= 8;
	ch_[4]= 'k';
	printf("%hd\n" , arr_[3]);
	printf("%c\n" , ch_[4]);


	/*************************************************************************************
	 ************************************************************************************/
	short signed int nums[3];
	signed char chars[3];
	for(short signed int i= 0; i <= 2 ; i++){
		printf("enter the value number: %hd\n" , i + 1);
		fflush(stdin); fflush(stdout);
		scanf("%hd" , &nums[i]);
	}
	for(short signed int i= 0; i <= 2 ; i++)printf("the stored value number %hd is: %hd\n" ,
			i + 1 , nums[i]);

	for(short signed int i= 0; i <= 2 ; i++){
		printf("enter the value of char number: %hd\n" , i + 1);
		fflush(stdin); fflush(stdout);
		scanf("%c" , &chars[i]);
	}
	for(short signed int i= 0; i <= 2 ; i++)printf("the stored value number %hd is: %c\n" ,
			i + 1 , chars[i]);


	/*************************************************************************************
	 ************************************************************************************/
	float degrees[5] , sum= 0.0;
	for(short signed int i= 0; i <= 4; i++){
		printf("enter the degree of student number: %hd\n" , i + 1);
		fflush(stdin); fflush(stdout);
		scanf("%f" , &degrees[i]);
		sum+= degrees[i];
	}
	printf("the avg of students degrees is: %f\n" , sum / 5);



	/*************************************************************************************
	 ************************************************************************************/
	signed char name[5]= {'a' , 'b' , 'c' , 'd' , '\0'};
	signed char name_[5]= "abcd";
	short signed int index= 0;
	while(name[index] != '\0') printf("%c" , name[index++]);
	printf("\n");

	index= 0;
	while(name_[index] != '\0') printf("%c" , name_[index++]);
	printf("\n");

	printf("%s %s\n" , name , name_);


	/*************************************************************************************
	 ************************************************************************************/

	short signed int numbers[3][3]= {{1 , 2 , 3} , {4 , 5 , 6} , {7 , 8 , 9}};
	printf("%hd %hd\n" , numbers[0][0] , numbers[2][2]);
	for(short signed int i= 0; i <= 2; i ++){
		for(short signed int j= 0; j <= 2; j++) printf("numbers[%hd][%hd]= %hd\n" ,
				i , j , numbers[i][j]);
	}


	/*************************************************************************************
	 ************************************************************************************/
	float matrix[3][3];
	for(short signed int i= 0; i <= 2; i++){
		for(short signed int j= 0 ; j<= 2 ; j++){
			printf("enter matrix item[%hd][%hd]\n" , i , j);
			fflush(stdin); fflush(stdout);
			scanf("%f" , &matrix[i][j]);
			matrix[i][j]*= 3;
		}
	}
	for(short signed int i= 0; i <= 2; i++){
		for(short signed int j= 0; j <= 2; j++) printf("%f\t" , matrix[i][j]);
		printf("\n");
	}


	/*************************************************************************************
	 ************************************************************************************/
	signed char names[5][5]= {"abcd" , "efgh" , "qwer" , "tyui" , "vbnm"};
	for(short signed int i= 0; i <= 4; i++){
		for(short signed int j= 0; j <= 4; j++) printf("%c" , names[i][j]);
		printf("\n");
	}

	for(short signed int i= 0; i <= 4; i++){
		printf("%s" , names[i]);
		printf("\n");
	}


	/*************************************************************************************
	 ************************************************************************************/
	short signed int array[3]= {1 , 2 , 3} , array_[3][3]= {{1 , 2 , 3} , {4 , 5 , 6} ,
			{7 , 8 , 9}};
	signed char charsArr[5]= {'a' , 'b' , 'c' , 'd' , '\0'};
	signed char charsArr_[5]= "abcd";
	printf("the first item is array is: %hd\n" , *array);
	printf("the first item in row 2 in array_ is: %hd\n" , *array_[0]);
	printf("the first char in charsArr is: %c\n" , *charsArr);
	printf("the first char in charsArr_ is: %c\n" , *charsArr_);


	/*************************************************************************************
	 ************************************************************************************/
	short signed Mainmatrix[3][3] , TransposeMatrix[3][3];
	for(short signed int i= 0; i <= 2; i++){
		for(short signed int j= 0; j <= 2; j++){
			printf("enter item[%hd][%hd]\n" , i , j);
			fflush(stdin); fflush(stdout);
			scanf("%hd" , &Mainmatrix[i][j]);
			TransposeMatrix[j][i]= Mainmatrix[i][j];
		}
	}
	printf("Original Matrix\n");
	for(short signed int i= 0; i <= 2; i++){
		for(short signed int j= 0; j <= 2; j++) printf("%hd\t" , Mainmatrix[i][j]);
		printf("\n");
	}
	printf("Transpose Matrix\n");
	for(short signed int i= 0; i <= 2; i++){
		for(short signed int j= 0; j <= 2; j++) printf("%hd\t" , TransposeMatrix[i][j]);
		printf("\n");
	}

	return 0;
}
