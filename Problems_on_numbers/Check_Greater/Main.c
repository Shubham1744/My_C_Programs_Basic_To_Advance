#include "Header.h"

int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;
    printf("Please enter number");
    scanf("%d",&iValue);
    bRet = ChkGreater(iValue);
    if(bRet == TRUE)
    {
        printf("Greater");
    }
    else
    {
        printf("Smaller");
    }
    return 0;
}