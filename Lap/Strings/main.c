/*
 * main.c
 *
 *  Created on: Nov 6, 2024
 *      Author: abdelfattahzakariaelbadry@gmail.com    
 */

/**********************************************************************************

                                    Strings

 ***********************************************************************************/

#include <stdio.h>
#include <string.h>

int main(void){

	/********************************************************************************
	 *******************************************************************************/
	signed char letters[5]= {'a' , 'b' , 'c' , 'd' , '\0'};
	signed char letters_[5]= {'a' , 'b' , 'c' , 'd' , 0};
	signed char letters__[]= {'a' , 'b' , 'c' , 'd' , '\0'};
	printf("%c %c %c\n" , letters[0] , letters[3] , letters[4]);

	letters_[0]= 'g';
	letters__[3]= 'k';
	printf("%c %c\n" , letters_[0] , letters__[3]);


	/********************************************************************************
	 *******************************************************************************/
	signed char text[]= {"abcd"};
	signed char text_[]= "abcd";
	short signed int i= 0;

	while(text[i] != '\0') printf("%c" , text[i++]);
	printf("\n");
	i= 0;

	while(text_[i] != 0) printf("%c" , text_[i++]);
	printf("\n");


	for(i= 0; i < sizeof(text) && text[i] != '\0'; i++) printf("%c" , text[i]);
	printf("\n");
	i= 0;

	printf("%s\n" , text);
	printf("%s\n" , text_);


	/********************************************************************************
	 *******************************************************************************/
	signed char letters_arr[20]= {'a' , 'b' , 'c' , 'd' , 'e' , '\0'};
	printf("the number of reserved bytes including null byte within array letters_arr are: %hd\n" ,
			sizeof(letters_arr));
	printf("the actual number of chars without null byte info within letters_arr are: %d\n" ,
			strlen(letters_arr));


	/********************************************************************************
	 *******************************************************************************/
	signed char letters_ar[]= {'a' , 'b' , 'c' , '\0' , 'e' , 'f' , 0 , 'g' , 'h' , '\0'};
	printf("%s\n" , letters_ar);
	printf("%s\n" , &letters_ar[0]);
	printf("%s\n" , &letters_ar[4]);
	printf("%s\n" , &letters_ar[7]);


	/********************************************************************************
	 *******************************************************************************/
	signed char chars_arr[30];
	printf("enter string info without space\n");
	fflush(stdin); fflush(stdout);
	scanf("%s" , chars_arr);
	printf("the entered info is: %s\n" , chars_arr);

	printf("enter string info without space\n");
	fflush(stdin); fflush(stdout);
	gets(chars_arr);
	printf("the entered info is: %s\n" , &chars_arr[0]);


	/********************************************************************************
	 *******************************************************************************/
	signed char names[3][15]= {"abcd" , "abcdefgh" , "abcdefghkml"};
	printf("the first name is: %s\n" , names);
	printf("the first name is: %s\n" , &names[0]);
	printf("the second name is: %s\n" , &names[1][0]);
	printf("the second name is: %s\n" , &names[1]);
	printf("the third name is: %s\n" , &names[2][0]);
	printf("the third name is: %s\n" , &names[2]);


	/********************************************************************************
	 *******************************************************************************/
	signed char b[20] , a[20]= "abcdefgh";
	short signed int j;
	for(j= 0; j < sizeof(b); j++) b[j]= a[j];
	printf("b arr= %s\n" , b);
	j= 0;

	while(a[j] != '\0') b[j]= a[j++];
	b[j]= '\0';
	printf("b arr= %s\n" , b);
	j= 0;

	do b[j]= a[j++]; while(a[j] != '\0');
	printf("b arr= %s\n" , b);

	strcpy(b , a);
	printf("b arr= %s\n" , b);


	/********************************************************************************
	 *******************************************************************************/
	signed char fname[]= "abcd" , lname[]= "efgh";
	strcat(fname , " ");
	strcat(fname , lname);
	printf("full name is: %s\n" , fname);
	printf("full name is: %s\n" , &fname[0]);



	/********************************************************************************
	 *******************************************************************************/
	signed char name[]= "abcdEFgh";
	printf("name= %s\n" , name);

	strlwr(name);
	printf("name= %s\n" , &name);


	strupr(name);
	printf("name= %s\n" , &name[0]);


	/********************************************************************************
	 *******************************************************************************/
	signed char name_a[]= "abcd" , name_a_c[]= "abcd" , name_b[]= "Abcd";
	printf("name_a & name_a_c= %d\n" , strcmp(name_a , name_a_c));
	printf("name_a & name_b= %d\n" , strcmp(name_a , name_b));
	printf("name_b & name_a= %d\n" , strcmp(name_b , name_a));

	printf("name_a & name_a_c= %d\n" , stricmp(name_a , name_a_c));
	printf("name_a & name_b= %d\n" , stricmp(name_a , name_b));
	printf("name_b & name_a= %d\n" , stricmp(name_b , name_a));

	signed char user_name[3][20] , names_db[3][20]= {"abcd efgh" , "kml iqr" , "stgp ukhk"};
	printf("enter your name\n");
	fflush(stdin); fflush(stdout);
	gets(user_name);

	for(short signed int k=0; k <= 2; k++){
		if(stricmp(user_name , names_db[k]) == 0){
			printf("Success Login\n");
			break;
		}
		else printf("Name Not Found\n");
	}



	/********************************************************************************
	 *******************************************************************************/
    signed char str_num[30];
    printf("enter number\n");
    fflush(stdin); fflush(stdout);
    gets(str_num);

    printf("%hd * 3= %hd\n" , atoi(str_num) , atoi(str_num) * 3);

    /*
     atof function helps computer to convert string to a number of type (float) if it
     is applicable
     */

	return 0;
}

