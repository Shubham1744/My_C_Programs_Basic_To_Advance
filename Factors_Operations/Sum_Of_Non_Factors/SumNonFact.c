/*
Write a program which accept number from user and return summation of all its
non factors.
*/

#include<stdio.h>
int SumNonFact(int iNo)
{
    int iSum = 0;
    int iCnt = 0;

    if(iNo == 0)
    {
        return 0;
    }

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
    for( iCnt = 1 ; iCnt<=iNo ; iCnt++ )
    {
       if((iNo % iCnt)!= 0)
       {
               iSum = iSum + iCnt;
       }
    }
    return iSum;
}
int main()
{
	int iValue = 0;
	int iRet = 0;
	printf("Enter number");
	scanf("%d",&iValue);
    iRet = SumNonFact(iValue);
    printf("Addition of non Factor number is %d",iRet);
	return 0;
}
