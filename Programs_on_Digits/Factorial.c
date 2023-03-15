///////////////////////////////////////////////////////////////
//
//		Accept Number from User nd Display Factorial of that Number
//
///////////////////////////////////////////////////////////////

#include<stdio.h>

int Factorial(int iValue)
{
	int iCnt = 0;
	int iFact = 1;
	
	for(iCnt =1; iCnt <= iValue; iCnt++)
	{
		iFact =iFact*iCnt;
	}
	
	return iFact;
}

int main()
{
	int iNum = 0;
	int iRet = 0;
	
	printf("Enter Number\n ");
	scanf("%d",&iNum);
	
	iRet = Factorial(iNum);
	printf("Factorial of a Number is %d",iRet);
}

	