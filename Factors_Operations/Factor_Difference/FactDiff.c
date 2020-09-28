/*
Write a program which accept number from user and return difference between
summation of all its factors and non factors.
*/

#include<stdio.h>
int DisplayFactor(int iNo)
{
    int iCnt = 0;
    int iSum = 0;
    int idiff = 0;

    if(iNo == 0)
    {
        return 0;
    }

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for( iCnt = 1 ; iCnt <= iNo/2 ; iCnt++ )
    {
       if((iNo % iCnt) == 0)
       {
               iSum = iSum+iCnt;
       }
    }
     for( iCnt = 1 ; iCnt <= iNo ; iCnt++ )
    {
       if((iNo % iCnt)!= 0)
       {
               idiff = idiff+iCnt;
       }
    }
    return iSum-idiff;
}
int main()
{
    int iValue = 0;
    int iRet;
    printf("Enter number\n");
    scanf("%d",&iValue);
    iRet =  DisplayFactor(iValue);
    printf("%d",iRet);
    return 0;
}
