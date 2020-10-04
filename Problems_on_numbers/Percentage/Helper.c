/*accept total marks & obtained marks from user and
calculate percentage.*/

#include "Header.h"

float Percentage(int iNo1, int iNo2)
{
    if(iNo1 == 0)
    {
        return -1;
    }
    float fperc = ((float)iNo2/(float)iNo1)*100;
    return fperc;
}