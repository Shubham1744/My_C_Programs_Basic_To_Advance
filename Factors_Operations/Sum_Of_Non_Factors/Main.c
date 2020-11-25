#include "Header.h"

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
