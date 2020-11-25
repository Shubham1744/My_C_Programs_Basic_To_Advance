/*
Write a program which accept number from user and return summation of all its
non factors.
*/

#include "Header.h"
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
