////////////////////////////////////////////////////////////////////////
//
//		Accept Number from user and check whether that Number is Perfect or not
//
////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

bool CheckPerfect(int iValue)
{
	int iCnt = 0;
    int iSum = 0;

        for(iCnt =1; iCnt <iValue; iCnt ++)
        {
            if(iValue % iCnt == 0)
            {
                iSum = iSum + iCnt;   
            }    
        }
		if (iSum == iValue)
		{
			return true;
        }
       else
       {
			return false;
       }
}
int main()
{
	int iValue = 0;
    bool bRet;

    printf("Enter number\n");
    scanf("%d",&iValue);    // 21

    bRet = CheckPerfect(iValue);     // ChkEven(21)
    if(bRet == true)
    {
        printf("%d is Perfect Number \n",iValue);
    }
    else
    {
        printf("%d is not a Perfect number\n",iValue);
    }
    return 0;
}