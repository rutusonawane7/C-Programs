///////////////////////////////////////////////////////////
//
//		Write a Program Summation of N Numbers
//
///////////////////////////////////////////////////////////

#include<stdio.h>

int SummationOfNumber(int iValue)
{
	int iCnt = 0, iSum =0;
       for(iCnt = 1; iCnt <= iValue; iCnt++)
       {
        iSum = iSum + iCnt;
       }
	    return iSum;
}

int main()
{
	int iNum = 0;
	int iRet = 0;
	
	printf("Enter Number \n");
	scanf("%d",&iNum);
	
	iRet = SummationOfNumber(iNum);
	printf("Summation Of Numbers is %d",iRet);
}
