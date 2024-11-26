/*
 * main.c
 *
 *  Created on: Nov 6, 2024
 *      Author: abdelfattahzakariaelbadry@gmail.com    
 */

/**********************************************************************************

                                      Bit Fields

 ***********************************************************************************/

typedef struct{
	unsigned int bit0: 1;
	unsigned int bit1to3: 3;
	unsigned int bit4: 1;
	unsigned int bit5to6: 2;
	unsigned int bit7: 1;
}SBitFieldUDT;
typedef struct{
	signed int bit0: 1;
	signed int bit1to3: 3;
	signed int bit4: 1;
	signed int bit5to6: 2;
	signed int bit7: 1;
}SBitFieldDDT;
typedef struct{
	short unsigned int bit0: 1;
	short unsigned int bit1to3: 3;
	short unsigned int bit4: 1;
	short unsigned int bit5to6: 2;
	short unsigned int bit7: 1;
}SBitFieldHUDT;
typedef struct{
	signed char bit0: 1;
	signed char bit1to3: 3;
	signed char bit4: 1;
	signed char bit5to6: 2;
	signed char bit7: 1;
}SBitFieldCDT;


//*********************************************************************************************
//*********************************************************************************************
typedef struct{
	short unsigned int HUbit0: 1;
	short unsigned int HUbit1to3: 3;
	short unsigned int HUbit4: 1;

	unsigned char Cbit0: 1;
	unsigned char Cbit0to3: 3;
	unsigned char Cbit4to5: 2;
}SBitFieldHyperidHUCDT;
typedef struct{
	float Fbit0to15;

	short unsigned int HUbit0to9: 10;

	unsigned char Cbit0: 1;
	unsigned char Cbit0to3: 3;
	unsigned char Cbit4to5: 2;
}SBitFieldHyperidFHUCDT;


//*********************************************************************************************
//*********************************************************************************************
typedef struct{
	short unsigned int bit0: 1;
	short unsigned int bit1to3: 3;
	short unsigned int bit4: 1;
	short unsigned int bit5to6: 2;
	short unsigned int bit7: 1;
}SURTRegister;

typedef struct{
	unsigned char bit0: 1;
	unsigned char bit1: 1;
	unsigned char bit2: 1;
	unsigned char bit3: 1;
	unsigned char bit4: 1;
	unsigned char bit5: 1;
	unsigned char bit6: 1;
	unsigned char bit7: 1;
}DDRegister;

void Set_Reset_DDRegister(DDRegister *DDRegisterOBJ , unsigned char Direction){
	DDRegisterOBJ->bit0= Direction;
	DDRegisterOBJ->bit1= Direction;
	DDRegisterOBJ->bit2= Direction;
	DDRegisterOBJ->bit3= Direction;
	DDRegisterOBJ->bit4= Direction;
	DDRegisterOBJ->bit5= Direction;
	DDRegisterOBJ->bit6= Direction;
	DDRegisterOBJ->bit7= Direction;

	return;
}


int main(void){

	printf("******************************************************************************\n");
	printf("******************************************************************************\n");
	printf("sizer of signed char data type= %d bytes\n" , sizeof(signed char));
	printf("sizer of unsigned char data type= %d bytes\n" , sizeof(unsigned char));
	printf("sizer of signed int data type= %d bytes\n" , sizeof(signed int));
	printf("sizer of unsigned int data type= %d bytes\n" , sizeof(unsigned int));
	printf("sizer of short signed int data type= %d bytes\n" , sizeof(short signed int));
	printf("sizer of short unsigned int data type= %d bytes\n" , sizeof(short unsigned int));
	printf("sizer of long signed int data type= %d bytes\n" , sizeof(long signed int));
	printf("sizer of long unsigned int data type= %d bytes\n" , sizeof(long unsigned int));
	printf("sizer of long long signed int data type= %d bytes\n" , sizeof(long long signed int));
	printf("sizer of long long unsigned int data type= %d bytes\n" , sizeof(long long unsigned int));
	printf("sizer of float data type= %d bytes\n" , sizeof(float));
	printf("sizer of double data type= %d bytes\n" , sizeof(double));
	printf("sizer of long double data type= %d bytes\n" , sizeof(long double));


	//*********************************************************************************************
	//*********************************************************************************************

	printf("******************************************************************************\n");
	printf("******************************************************************************\n");
	printf("size of result of 5 * 6=  %d bytes\n" , sizeof(5 * 6));
	printf("size of result of 5.5 * 6=  %d bytes\n" , sizeof(5.5 * 6));


	//*********************************************************************************************
	//*********************************************************************************************

	printf("******************************************************************************\n");
	printf("******************************************************************************\n");
	short unsigned int LArray[5]= {1 , 2 , 3 , 4 , 5};
	printf("total memory location size reserved for LArray address= %d bytes\n" , sizeof(LArray));

	printf("number of rows/memory locations reserved for LArray= %d rows/memory locations\n" , sizeof(LArray) / sizeof(LArray[0]));


	//*********************************************************************************************
	//*********************************************************************************************


	printf("******************************************************************************\n");
	printf("******************************************************************************\n");
	printf("from %d bytes there are 8bits are used\n" , sizeof(SBitFieldUDT));
	printf("from %d bytes there are 8bits are used\n" , sizeof(SBitFieldDDT));
	printf("from %d bytes there are 8bits are used\n" , sizeof(SBitFieldHUDT));
	printf("from %d bytes there are 8bits are used\n" , sizeof(SBitFieldCDT));


	//*********************************************************************************************
	//*********************************************************************************************


	printf("******************************************************************************\n");
	printf("******************************************************************************\n");
	printf("from %d bytes there are\n" , sizeof(SBitFieldHyperidHUCDT));
	printf("\t4bits reserved from 2 short unsigned int bytes\n");
	printf("\t5bits reserved from 1 unsigned char byte\n");
	printf("from %d bytes there are\n" , sizeof(SBitFieldHyperidFHUCDT));
	printf("\t16bits reserved from 4 float bytes\n");
	printf("\t10bits reserved from 2 short unsigned int bytes\n");
	printf("\t6bits reserved from 1 unsigned char byte\n");


	//*********************************************************************************************
	//*********************************************************************************************


	printf("******************************************************************************\n");
	printf("******************************************************************************\n");
	SURTRegister SURTRegisterOBJ;
	SURTRegisterOBJ.bit0= 1;
	SURTRegisterOBJ.bit7= 0;
	SURTRegisterOBJ.bit4= 0x0;
	SURTRegisterOBJ.bit1to3= 7;
	SURTRegisterOBJ.bit5to6= 0b10;

	printf("The value of bit0 within %d URTRegister register bits is: %hu\n" , sizeof(SURTRegister)*8 ,  SURTRegisterOBJ.bit0);
	printf("The value of bit7 within %d URTRegister register bits is: %hu\n" , sizeof(SURTRegister)*8 ,  SURTRegisterOBJ.bit7);
	printf("The value of bit4 within %d URTRegister register bits is: %hu\n" , sizeof(SURTRegister)*8 ,  SURTRegisterOBJ.bit4);
	printf("The value of bit1to3 within %d URTRegister register bits is: %hu\n" , sizeof(SURTRegister)*8 , SURTRegisterOBJ.bit1to3);
	printf("The value of bit5to6 within %d URTRegister register bits is: %hu\n" , sizeof(SURTRegister)*8  , SURTRegisterOBJ.bit5to6);


	DDRegister DDRegisterOBJ= {0 , 0 , 1 , 0 , 1 , 0 , 1 , 0};
	printf("The value of bit0 within %d DDRegister  bits is: %u\n" , sizeof(DDRegister)*8 ,  DDRegisterOBJ.bit0);
	printf("The value of bit2 within %d DDRegister bits is: %u\n" , sizeof(DDRegister)*8 ,  DDRegisterOBJ.bit2);

	Set_Reset_DDRegister(&DDRegisterOBJ , 0);
	printf("The value of bit0 within %d DDRegister  bits is: %u\n" , sizeof(DDRegister)*8 ,  DDRegisterOBJ.bit0);
	printf("The value of bit2 within %d DDRegister bits is: %u\n" , sizeof(DDRegister)*8 ,  DDRegisterOBJ.bit2);

	return 0;

}

