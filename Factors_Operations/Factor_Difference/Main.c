#include "Header.h"

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
