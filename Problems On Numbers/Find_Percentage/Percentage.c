/*accept total marks & obtained marks from user and
calculate percentage.*/

#include<stdio.h>
float Percentage(int iNo1, int iNo2)
{
    if(iNo1 == 0)
    {
        return -1;
    }
    float fperc = ((float)iNo2/(float)iNo1)*100;
    return fperc;
}
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
