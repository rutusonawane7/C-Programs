/////////////////////////////////////////////////////////////
//
//		Accept Number from User Chech Whether the Number is Even or odd
//
////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

bool ChkEven(int iNo)
{
       if((iNo % 2) == 0)
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

    bRet = ChkEven(iValue);     // ChkEven(21)
    if(bRet == true)
    {
        printf("%d is Even number\n",iValue);
    }
    else
    {
        printf("%d is Odd number\n",iValue);
    }
    return 0;
}