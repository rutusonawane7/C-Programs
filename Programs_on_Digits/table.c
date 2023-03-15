/////////////////////////////////////////////////////////////////////
//
//		Accept Number from the user nd Display table of that Number
//
////////////////////////////////////////////////////////////////////

#include<stdio.h>
void Table(int iValue)
{
	 int iCnt =0, iTab =0;
        for(iCnt = 1; iCnt <= 10; iCnt++)
        {
            iTab = iValue*iCnt;
            printf("\n%d",iTab);
        }
}

int main()
{
	int iNum = 0;
	
	printf("Enter Number \n");
	scanf("%d",&iNum);
	
	Table(iNum);
}
