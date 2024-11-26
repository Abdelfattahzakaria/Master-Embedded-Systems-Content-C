/*
 * main.c
 *
 *  Created on: Nov 6, 2024
 *      Author: abdelfattahzakariaelbadry@gmail.com    
 */

/**********************************************************************************

                                         Pointers

 ***********************************************************************************/

#include <stdio.h>
#include <string.h>
#include <math.h>

#define string                                 unsigned char*


//*****************************************************************************************
//*****************************************************************************************
void by_value(short unsigned int num , short unsigned int num2){
	num+= 5;
	num2*= 3;

	return;
}

//*****************************************************************************************
//*****************************************************************************************

void by_ref(short unsigned int *num , short unsigned int *num2){
	short unsigned int temp= *num2;
	*num2= *num;
	*num= temp;

	return;
}


//*****************************************************************************************
//*****************************************************************************************
void try_2_modify(short unsigned int arr[] , short unsigned int *arr_size){
	for(unsigned char i= 0; i < *arr_size; i++) arr[i]*= 5;

	for(unsigned char i= 0; i < *arr_size; i++) printf("%hu\n" , arr[i]);
	printf("\n");


	return;
}

void try_2_modify_ptr(short unsigned int *arr , short unsigned int *arr_size){
	for(unsigned char i= 0; i < *arr_size; i++) arr[i]*= 5;

	for(unsigned char i= 0; i < *arr_size; i++) printf("%hu\n" , arr[i]);
	printf("\n");

	return;
}
void try_2_modify_ptr_(short unsigned int *arr , short unsigned int *arr_size){
	for(unsigned char i= 0; i < *arr_size; i++) *(arr + i)*= 5;

	for(unsigned char i= 0; i < *arr_size; i++) printf("%hu\n" , *(arr + i));
	printf("\n");

	return;
}
void try_2_modify_ptr__(short unsigned int *arr , short unsigned int *arr_size){
	for(unsigned char i= 0; i < *arr_size; i++ , arr++) *arr*= 5;

	for(unsigned char i= 0; i < *arr_size; i++) printf("%hu\n" , *arr++);
	printf("\n");

	return;
}


//*****************************************************************************************
//*****************************************************************************************
void (*GVFPtr) (void);
void (*GVFPtr_Param) (short unsigned int *num , short unsigned int *num2);

void printHello(void){
	printf("Hello World\n");

	return;
}
void swap(short unsigned int *num , short unsigned int *num2){
	short unsigned int temp= *num2;
	*num2= *num;
	*num= temp;

	return;
}


//*****************************************************************************************
//*****************************************************************************************
typedef struct{
	float basics;
	float bouns;
} SSalaryDT;
typedef struct{
	string *name;
	short unsigned int age;
	SSalaryDT salary;
} SEmployeeDT;


void display_info(SEmployeeDT *SEmployeeDTOBJ){
	printf("employee name= %s\n" , SEmployeeDTOBJ->name);
	printf("employee age= %hu\n" , SEmployeeDTOBJ->age);
	printf("employee basics salary= %f\n" , SEmployeeDTOBJ->salary.basics);
	printf("employee bouns= %f\n" , SEmployeeDTOBJ->salary.bouns);

	return;
}



int main(void){

	//*****************************************************************************************
	//*****************************************************************************************
	printf("********************************************************************************\n\n");
	unsigned long long int x= 0x00000000ffffaaaa;
	char *target_address= 0x00000000ffffaaaa;


	//*****************************************************************************************
	//*****************************************************************************************
	printf("********************************************************************************\n\n");
	short unsigned int y= 5;
	short unsigned int *ptr , *ptr2 , *ptr3;
	ptr= &y;
	ptr2= NULL;
	ptr3= 0;
	printf("address of ptr= %p ---->> target address of ptr= %p\n" , &ptr , ptr);
	printf("address of ptr2= %p ---->> target address of ptr= %p\n" , &ptr2 , ptr2);
	printf("address of ptr3= %p ---->> target address of ptr= %p\n" , &ptr3 , ptr3);


	//*****************************************************************************************
	//*****************************************************************************************
	printf("********************************************************************************\n\n");
	short unsigned int z= 30;
	printf("value of z= %hu ---->> within memory address= %p\n" , z , &z);


	//*****************************************************************************************
	//*****************************************************************************************
	printf("********************************************************************************\n\n");
	short unsigned int w= 5;
	short unsigned int *ptr_w= NULL;
	ptr_w= &w;
	printf("address of w= %p\n" , &w);
	printf("address of w= %p\n" , ptr_w);
	printf("address of ptr_w= %p\n" , &ptr_w);

	printf("value of w= %hu\n" , w);
	printf("value of w= %hu\n" , *ptr_w);


	//*****************************************************************************************
	//*****************************************************************************************
	printf("********************************************************************************\n\n");
	short unsigned int *ptr_w2= &w;
	printf("address of w= %p\n" , &w);
	printf("address of w= %p\n" , ptr_w2);
	printf("address of ptr_w= %p\n" , &ptr_w2);

	printf("value of w= %hu\n" , w);
	printf("value of w= %hu\n" , *ptr_w2);


	//*****************************************************************************************
	//*****************************************************************************************
	printf("********************************************************************************\n\n");
	unsigned short int q , r , *ptr_xy= NULL;
	q= 0xfe;
	ptr_xy= &q;
	printf("q= %x , q= %x\n" , q , *ptr_xy);
	*ptr_xy= 0xef;
	printf("q= %x , q= %x\n" , q , *ptr_xy);

	r= 0xfe;
	ptr_xy= &r;
	printf("r= %x , r= %x\n" , r , *ptr_xy);
	*ptr_xy= 0xef;
	printf("r= %x , r= %x\n" , r , *ptr_xy);


	//*****************************************************************************************
	//*****************************************************************************************
	printf("********************************************************************************\n\n");
	unsigned short int arr[5]= {1 , 2 , 3 , 4 , 5};
	printf("array address == arr[0]= %p\n" , arr);
	printf("array address == arr[0]= %p\n" , &arr);
	printf("array address == arr[0]= %p\n" , &arr[0]);

	printf("*******************************\n");

	unsigned short int *ptr_arr= arr;
	printf("array address == arr[0]= %p\n" , ptr_arr);
	printf("ptr_arr address= %p\n" , &ptr_arr);

	printf("*******************************\n");

	ptr_arr= &arr;
	printf("array address == arr[0]= %p\n" , ptr_arr);
	printf("ptr_arr address= %p\n" , &ptr_arr);

	printf("*******************************\n");

	ptr_arr= &arr[0];
	printf("array address == arr[0]= %p\n" , ptr_arr);
	printf("ptr_arr address= %p\n" , &ptr_arr);


	//*****************************************************************************************
	//*****************************************************************************************
	printf("********************************************************************************\n\n");
	unsigned short int numbers[5]= {1 , 2 , 3 , 4 , 5};
	unsigned short int *ptr_numbers= numbers;
	printf("numbers[0]= %hu\n" , *numbers);
	printf("numbers[0]= %hu\n" , numbers[0]);
	printf("numbers[0]= %hu\n" , *ptr_numbers);
	printf("numbers[0]= %hu\n" , *(ptr_numbers + 0));
	printf("numbers[0]= %hu\n" , ptr_numbers[0]);

	printf("*******************************\n");
	printf("numbers[1]= %hu\n" , *(numbers + 1));
	printf("numbers[1]= %hu\n" , numbers[1]);
	printf("numbers[1]= %hu\n" , *(ptr_numbers + 1));
	printf("numbers[1]= %hu\n" , *(ptr_numbers + 1));
	printf("numbers[1]= %hu\n" , ptr_numbers[1]);

	printf("*******************************\n");
	printf("numbers[1]= %hu\n" , numbers[1]);
	printf("numbers[1]= %hu\n" , *++ptr_numbers);
	printf("numbers[1]= %hu\n" , *(--ptr_numbers + 1));
	printf("numbers[1]= %hu\n" , ptr_numbers[1]);


	//*****************************************************************************************
	//*****************************************************************************************
	printf("********************************************************************************\n\n");
	unsigned short int values[5]= {1 , 2 , 3 , 4 , 5};
	unsigned short int *ptr_values= &values;
	printf("values[3]= %hu\n" , values[3]);
	printf("values[3]= %hu\n" , *(values + 3));
	printf("values[3]= %hu\n" , *(ptr_values + 3));
	printf("values[3]= %hu\n" , ptr_values[3]);


	//*****************************************************************************************
	//*****************************************************************************************
	printf("********************************************************************************\n\n");
	unsigned short int data[5]= {1 , 2 , 3 , 4 , 5};
	unsigned short int *ptr_data= &data[0];

	for(unsigned char i= 0; i <= 4; i++) *ptr_data++*= 3;
	ptr_data= data;

	for(unsigned char i= 0; i <= 4; i++ , ptr_data++) printf("%hu\n" , *ptr_data);
	ptr_data= &data;

	printf("*******************************\n");

	for(unsigned char i= 0; i <= 4; i++) *(ptr_data + i)*= 3;
	ptr_data= &data[0];

	for(unsigned char i= 0; i <= 4; i++) printf("%hu\n" , *(ptr_data + i));
	ptr_data= data;

	printf("*******************************\n");

	for(unsigned char i= 0; i <= 4; i++) ptr_data[i]*= 3;
	ptr_data= &data[0];

	for(unsigned char i= 0; i <= 4; i++) printf("%hu\n" , ptr_data[i]);
	ptr_data= data;


	//*****************************************************************************************
	//*****************************************************************************************
	printf("********************************************************************************\n\n");
	short unsigned int items[3]= {1 , 2 , 3} , Z= 0;
	short unsigned int *ptr_items= items;
	Z= 5 + *ptr_items++;
	printf("y= %hu\n" , Z);
	--ptr_items;

	Z= 5 + *(ptr_items++);
	printf("y= %hu\n" , Z);
	--ptr_items;

	Z= 5 + *++ptr_items;
	printf("y= %hu\n" , Z);
	--ptr_items;

	Z= 5 + *(++ptr_items);
	printf("y= %hu\n" , Z);
	--ptr_items;

	Z= 5 + ++(*ptr_items);
	printf("y= %hu\n" , Z);


	//*****************************************************************************************
	//*****************************************************************************************
	printf("********************************************************************************\n\n");
	short unsigned int elements[3]= {1 , 2 , 3};
	short unsigned int *ptr_elements= &elements[0];
	printf("%hu  ,  %hu  , %hu , %hu  ,  %hu\n" , *elements , *(elements + 1) , *(elements + 2) ,
			elements[1] , elements[2]);
	printf("%hu  ,  %hu  , %hu  %hu  , %hu\n" , *ptr_elements , *(ptr_elements + 1) , *(ptr_elements + 2) ,
			ptr_elements[1] , ptr_elements[2]);


	//*****************************************************************************************
	//*****************************************************************************************
	printf("********************************************************************************\n\n");
	char letters[5]= "abcd";
	char *ptr_letters= "abcd";
	printf("%s\n" , letters);
	printf("%s\n" , ptr_letters);

	printf("%c\n" , *ptr_letters);
	printf("%c\n" , *++ptr_letters);
	printf("%c\n" , *(ptr_letters + 1));


	//*****************************************************************************************
	//*****************************************************************************************
	printf("********************************************************************************\n\n");
	char chars[5];
	char *ptr_chars;

	chars[0]= 'a';
	chars[1]= 'b';
	chars[2]= 'c';
	chars[3]= 'd';
	chars[4]= '\0';

	ptr_chars= "abcd";
	printf("%s\n" , chars);
	printf("%s\n" , ptr_chars);

	printf("%c\n" , *ptr_chars);
	printf("%c\n" , *++ptr_chars);
	printf("%c\n" , *(ptr_chars + 1));
	ptr_chars= "abcd";

	chars[3]= 'q';
	printf("%s\n" , chars);
	printf("%s\n" , ptr_chars);



	//*****************************************************************************************
	//*****************************************************************************************
	printf("********************************************************************************\n\n");
	char word[5]= "abcd";
	char *ptr_word= "abcd";

	printf("%s\n" , word);
	printf("%s\n" , ptr_word);

	unsigned char i= 0;
	while(word[i] != '\0') printf("%c" , word[i++]);
	printf("\n");

	while(*ptr_word != '\0') printf("%c" , *ptr_word++);
	printf("\n");

	i= 0;
	for(; i < strlen(word); i++) printf("%c" , word[i]);
	printf("\n");

	i= 0;
	for(; i < strlen(ptr_word); i++) printf("%c" , ptr_word[i]);
	printf("\n");


	//*****************************************************************************************
	//*****************************************************************************************
	printf("********************************************************************************\n\n");
	unsigned char str= "abcd" , str2= "efgh";
	unsigned char *ptr_str[3];

	ptr_str[0]= &str;
	ptr_str[1]= &str2;
	ptr_str[2]= (unsigned char*)"jdsfgkdopfgikpfogikdpgikpdogkdopdisegijtedtgldfjfgj";

	printf("size of ptr_char= %d\n" , sizeof(ptr_str));

	printf("%s\n" , ptr_str[2]);


	//*****************************************************************************************
	//*****************************************************************************************
	printf("********************************************************************************\n\n");
	unsigned char names[3][5]= {{"abcd"} , {"efgh"} , {"kmle"}};
	unsigned char *ptr_names[3]= {"jdshflkfbfiopoigjkpokpodgikpodigpodoiopifdpgodi" ,
			"abcd" ,
			"ergujteriuojergjediorgjediorg"};

	for(unsigned char j= 0; j <= 2; j++) printf("%s\n" , names[j]);

	for(unsigned char j= 0; j <= 2; j++) printf("%s\n" , ptr_names[j]);

	//*****************************************************************************************
	//*****************************************************************************************
	printf("********************************************************************************\n\n");
	string ptr_string[3]= {"jdshflkfbfiopoigjkpokpodgikpodigpodoiopifdpgodi" ,
			"abcd" ,
			"ergujteriuojergjediorgjediorg"};
	for(unsigned char j= 0; j <= 2; j++) printf("%s\n" , ptr_string[j]);


	//*****************************************************************************************
	//*****************************************************************************************
	printf("********************************************************************************\n\n");
	short unsigned int num= 3 , num2= 5 , *ptr_num;
	printf("num= %hu , num2= %hu\n" , num , num2);

	by_value(num , num2);

	printf("num= %hu , num2= %hu\n" , num , num2);

	ptr_num= &num;
	by_ref(ptr_num , &num2);
	printf("num= %hu , num2= %hu\n" , num , num2);


	//*****************************************************************************************
	//*****************************************************************************************
	printf("********************************************************************************\n\n");
	short unsigned int arr_values_[]= {1 , 2 , 3 , 4 , 5} , arr_size= 5;
	short unsigned int *arr_values_ptr= arr_values_;
	short unsigned int *arr_values_ptr_= &arr_values_;
	short unsigned int *arr_values_ptr__= &arr_values_[0];

	try_2_modify(arr_values_ , &arr_size);
	printf("*******************************\n");
	try_2_modify(&arr_values_ , &arr_size);
	printf("*******************************\n");
	try_2_modify(&arr_values_[0] , &arr_size);
	printf("*******************************\n");

	try_2_modify_ptr(arr_values_ptr , &arr_size);
	printf("*******************************\n");
	try_2_modify_ptr_((arr_values_ptr_) , &arr_size);
	printf("*******************************\n");
	try_2_modify_ptr_(arr_values_ptr__ , &arr_size);


	//*****************************************************************************************
	//*****************************************************************************************
	printf("********************************************************************************\n\n");
	short unsigned int p= 20;
	float k= 60.58;
	void *ptr_general= NULL;

	printf("p= %hu\n" , p);
	ptr_general= &p;
	*(short unsigned int*)ptr_general*= 3;
	printf("p= %hu\n" , p);

	printf("k= %f\n" , k);
	ptr_general= &k;
	*(float*)ptr_general*= 3.0;
	printf("k= %f\n" , k);


	//*****************************************************************************************
	//*****************************************************************************************
	printf("********************************************************************************\n\n");
	short unsigned int x_value= 30;
	short unsigned int *ptr_x_value= &x_value;
	short unsigned int **ptr_ptr_x_value= &ptr_x_value;
	printf("x_value address= %p\n" , &x_value);
	printf("x_value address= %p\n" , ptr_x_value);
	printf("x_value address= %x\n" , *ptr_ptr_x_value);

	printf("ptr_x_value address= %p\n" , &ptr_x_value);
	printf("ptr_ptr_x_value address= %p\n" , &ptr_ptr_x_value);

	printf("x_value value= %hu\n" , x_value);
	printf("x_value value= %hu\n" , *ptr_x_value);
	printf("x_value value= %hu\n" , **ptr_ptr_x_value);

	**ptr_ptr_x_value= 70;
	printf("x_value value= %hu\n" , x_value);
	printf("x_value value= %hu\n" , *ptr_x_value);
	printf("x_value value= %hu\n" , **ptr_ptr_x_value);


	//*****************************************************************************************
	//*****************************************************************************************
	printf("********************************************************************************\n\n");
	GVFPtr= printHello;
	GVFPtr();

	short unsigned int fnum= 30 , snum= 70;
	short unsigned int *ptr_fnum= &fnum;
	GVFPtr_Param= swap;
	printf("fnum= %hu , snum= %hu\n" , fnum , snum);
	GVFPtr_Param(ptr_fnum , &snum);
	printf("fnum= %hu , snum= %hu\n" , fnum , snum);


	//*****************************************************************************************
	//*****************************************************************************************
	printf("********************************************************************************\n\n");
	SEmployeeDT SEmployeeDTOBJ;
	SEmployeeDTOBJ.name= "abcdefgh";
	SEmployeeDTOBJ.age= 65876;
	SEmployeeDTOBJ.salary.basics= 686.34;
	SEmployeeDTOBJ.salary.bouns= 556.8788;

	display_info(&SEmployeeDTOBJ);


	return 0;

}


