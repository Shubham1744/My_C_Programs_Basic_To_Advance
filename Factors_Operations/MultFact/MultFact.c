/*
Write a program which accept number from user and display its multiplication of
factors.
*/

#include<stdio.h>
int MultFact(int iNo)
{
	int iMult = 1;
    int iCnt = 0;

    if(iNo == 0)
    {
        return 0;
    }

    if(iNo < 0)
    {
        iNo = -iNo;
    }


    for(iCnt = 2; iCnt <= iNo/2 ; iCnt++)
    {
            if((iNo % iCnt) == 0)
            {
                iMult = iMult * iCnt;
            }
    }

    return iSum;
}
int main()
{
	int iValue = 0;
	int iRet = 0;
	printf(“Enter number”);
	scanf(“%d”,&iValue);
	iRet = MultFact(iValue);
	printf(“%d”,iRet);
	return 0;
}
