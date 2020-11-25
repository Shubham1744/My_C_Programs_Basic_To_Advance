#include "Header.h"

int main()
{
	int iValue1 = 0,iValue2 = 0;
	float fRet = 0.0;
	
	printf("Please enter total marks");
	scanf("%d",&iValue1);	
	printf("Please enter obtained marks");
	scanf("%d",&iValue2);
	fRet = Percentage(iValue1, iValue2);
	printf("%.2f %%",fRet);
	return 0;
}