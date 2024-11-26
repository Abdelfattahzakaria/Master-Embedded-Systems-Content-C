/*
 * main.c
 *
 *  Created on: Nov 6, 2024
 *      Author: abdelfattahzakariaelbadry@gmail.com    
 */

/**********************************************************************************

                                      Struct

 ***********************************************************************************/


#include <stdio.h>
#include <string.h>
#include <math.h>

//*********************************************************************
//*********************************************************************
struct SEmployee{
	unsigned char name[50];
	short unsigned int age;
	float salary;
};

//*********************************************************************
//*********************************************************************
struct SEmployee2{
	unsigned char name[50];
	short unsigned int age;
	float salary;
}GEmployeeeObj;

//*********************************************************************
//*********************************************************************
struct SEmbloyee3{
	unsigned char name[50];
	short unsigned int age;
	float salary;
}GEmployeeeObj2 , GEmployeeeObj3;

//*********************************************************************
//*********************************************************************
struct SEmployee4{
	unsigned char name[50];
	short unsigned int age;
	float salary;
};

struct SEmployee4 GEmployeeeObj4;

struct SEmployee4 GEmployeeeObj5 , GEmployeeeObj6;

//*********************************************************************
//*********************************************************************
struct SEmployee5{
	unsigned char name[50];
	short unsigned int age;
	float salary;
};

//*********************************************************************
//*********************************************************************
struct SEmployee6{
	unsigned char *name;
	short unsigned int age;
	float salary;
};

//*********************************************************************
//*********************************************************************
typedef struct SEmployee7{
	signed char *name;
	short unsigned int age;
	float salary;
}SEmployee7DT;

//*********************************************************************
//*********************************************************************
typedef struct SSalary{
	float basics;
	float bouns;
}SSalaryDT;

typedef struct SEmployee8{
	signed char *name;
	short unsigned int age;
	SSalaryDT salary;
}SEmployee8DT;


//*********************************************************************
//*********************************************************************
void by_value(SEmployee7DT SEmployee7DTObj){
	SEmployee7DTObj.name= "efgh";
	SEmployee7DTObj.age= 70;
	SEmployee7DTObj.salary= 456.998;

	printf("Employee Info are:\n");
	printf("\tName: %s" , SEmployee7DTObj.name);
	printf("\tAge: %hu" , SEmployee7DTObj.age);
	printf("\tSalary: %f\n" , SEmployee7DTObj.salary);

	return;
}

//*********************************************************************
//*********************************************************************
void by_reference(SEmployee7DT *SEmployee7DTObj){
	SEmployee7DTObj->name= "efgh";
	SEmployee7DTObj->age= 70;
	SEmployee7DTObj->salary= 456.998;

	printf("Employee Info are:\n");
	printf("\tName: %s" , SEmployee7DTObj->name);
	printf("\tAge: %hu" , SEmployee7DTObj->age);
	printf("\tSalary: %f\n" , SEmployee7DTObj->salary);

	return;
}


int main(void){

	struct SEmployee LEmployeeObj=  {{'\0'} , 0 , 0.0};

	//*********************************************************************
	//*********************************************************************
	struct SEmployee5 LEmployee5Obj= {"abcd" , 50 , 60.0};
	printf("Employee Info are:\n");
	printf("\tName: %s" , LEmployee5Obj.name);
	printf("\tAge: %hu" , LEmployee5Obj.age);
	printf("\tSalary: %f\n" , LEmployee5Obj.salary);

	//*********************************************************************
	//*********************************************************************
	struct SEmployee5 LEmployee5Obj2;
	LEmployee5Obj2.name[0]= 'a';
	LEmployee5Obj2.name[1]= 'b';
	LEmployee5Obj2.name[2]= 'c';
	LEmployee5Obj2.name[3]= 'd';
	LEmployee5Obj2.name[4]= '\0';
	LEmployee5Obj2.age= 70;
	LEmployee5Obj2.salary= 80.5;
	printf("Employee Info are:\n");
	printf("\tName: %s" , LEmployee5Obj2.name);
	printf("\tAge: %hu" , LEmployee5Obj2.age);
	printf("\tSalary: %f\n" , LEmployee5Obj2.salary);

	//*********************************************************************
	//*********************************************************************
	struct SEmployee6 LEmployee6Obj;
	LEmployee6Obj.name= "abcd";
	LEmployee6Obj.age= 90;
	LEmployee6Obj.salary= 150.768;
	printf("Employee Info are:\n");
	printf("\tName: %s" , LEmployee6Obj.name);
	printf("\tAge: %hu" , LEmployee6Obj.age);
	printf("\tSalary: %f\n" , LEmployee6Obj.salary);

	//*********************************************************************
	//*********************************************************************
	SEmployee7DT LEmployee7DTObj;
	LEmployee7DTObj.name= "abcd";
	LEmployee7DTObj.age= 190;
	LEmployee7DTObj.salary= 670.768;
	printf("Employee Info are:\n");
	printf("\tName: %s" , LEmployee7DTObj.name);
	printf("\tAge: %hu" , LEmployee7DTObj.age);
	printf("\tSalary: %f\n" , LEmployee7DTObj.salary);

	//*********************************************************************
	//*********************************************************************
	SEmployee7DT LEmployee7DTArrObj[3];
	LEmployee7DTArrObj[0].name= "abcd";
	LEmployee7DTArrObj[0].age= 50;
	LEmployee7DTArrObj[0].salary= 70.9879;
	LEmployee7DTArrObj[1].name= "efgh";
	LEmployee7DTArrObj[1].age= 80;
	LEmployee7DTArrObj[1].salary= 90.75;
	LEmployee7DTArrObj[2].name= "kml";
	LEmployee7DTArrObj[2].age= 30;
	LEmployee7DTArrObj[2].salary= 6757.89;


	for(short unsigned int i= 0; i <= 2; i++){
		printf("*Info For Employee Number %hu: \n" , i + 1);
		printf("Employee Name: %s\n" , LEmployee7DTArrObj[i].name);

		printf("Employee age: %hu\n" , LEmployee7DTArrObj[i].age);

		printf("Employee salary: %f\n" , LEmployee7DTArrObj[i].salary);
	}

	//*********************************************************************
	//*********************************************************************
	SEmployee7DT LEmployee7DTObj2;
	LEmployee7DTObj2.name= "abcd";
	LEmployee7DTObj2.age= 190;
	LEmployee7DTObj2.salary= 670.768;

	by_value(LEmployee7DTObj2);

	printf("Employee Info after calling by_value are:\n");
	printf("\tName: %s" , LEmployee7DTObj2.name);
	printf("\tAge: %hu" , LEmployee7DTObj2.age);
	printf("\tSalary: %f\n" , LEmployee7DTObj2.salary);

	//*********************************************************************
	//*********************************************************************
	SEmployee7DT LEmployee7DTObj3 , *LEmployee7DTObj3Ptr;
	LEmployee7DTObj3.name= "abcd";
	LEmployee7DTObj3.age= 190;
	LEmployee7DTObj3.salary= 670.768;

	LEmployee7DTObj3Ptr= &LEmployee7DTObj3;
	by_reference(LEmployee7DTObj3Ptr);

	printf("Employee Info after calling by_reference are:\n");
	printf("\tName: %s" , LEmployee7DTObj3.name);
	printf("\tAge: %hu" , LEmployee7DTObj3.age);
	printf("\tSalary: %f\n" , LEmployee7DTObj3.salary);

	//*********************************************************************
	//*********************************************************************
	SEmployee8DT LEmployee8DTObj;
	LEmployee8DTObj.name= "abcd";
	LEmployee8DTObj.age= 190;
	LEmployee8DTObj.salary.basics= 570.768;
	LEmployee8DTObj.salary.bouns= 30.768;
	printf("Employee Info are:\n");
	printf("\tName: %s" , LEmployee8DTObj.name);
	printf("\tAge: %hu" , LEmployee8DTObj.age);
	printf("\tBasics salary: %f\n" , LEmployee8DTObj.salary.basics);
	printf("\tBouns salary: %f\n" , LEmployee8DTObj.salary.bouns);

	return 0;

}

