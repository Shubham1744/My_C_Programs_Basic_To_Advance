#include<stdio.h>

int main(int argc, char *argv[])
{
	int i = 0, j = 0;
	i = atoi(argv[1]);
	j = atoi(argv[2]);
    if(argc == 3)
    {
        printf("Addition of number is %d ",i+j);
    }
    else if(argc > 3)
    {
        printf("Too many Arguments..please write in below format :\n");
        printf("File_name Arg1 Arg2\n");
    }
    else
    {
        printf("less than two Arguments please check");
    }
    return 0;
}
