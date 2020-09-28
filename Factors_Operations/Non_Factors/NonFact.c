/*
Write a program which accept number from user and display all its non factors.
*/

#include<stdio.h>
void FactRev(int iNo)
{
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
               printf("%d\t",iCnt);
       }
    }
}
int main()
{
	int iValue = 0;
	printf("Enter number");
	scanf("%d",&iValue);
	FactRev(iValue);
	return 0;
}
