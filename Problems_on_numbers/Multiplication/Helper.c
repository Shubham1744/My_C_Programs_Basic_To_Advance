/*accept three numbers and print its multiplication.*/

#include "Header.h"

int Multiply(int iNo1,int iNo2,int iNo3)
{
    if(iNo1 != 0 && iNo2 == 0 && iNo3 == 0)
    {
        return iNo1;
    }
    else if(iNo1 == 0 && iNo2 != 0 && iNo3 == 0)
    {
        return iNo2;
    }
    else
    {
        return iNo3;
    }
    
    //for multiplication
    if(iNo1 == 0)
    {
        return iNo2*iNo3;
    }
    else if(iNo2 == 0)
    {
        return iNo1*iNo3;
    }
    else
	{
     return iNo1*iNo2;
    }
}