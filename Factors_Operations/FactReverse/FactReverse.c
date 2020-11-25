/*
Write a program which accept number from user and display its factors in
reverse order.
*/

#include "Header.h"

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

    for( iCnt = iNo/2 ; iCnt>=1 ; iCnt-- )
    {
       if((iNo % iCnt) == 0)
       {
               printf("%d\t",iCnt);
       }
    }
}
