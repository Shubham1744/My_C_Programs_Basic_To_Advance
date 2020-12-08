#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>
#include <assert.h>
int main(int argc, char *argv[])
{
	int fd = 0,ret = 0;
	char arr[256];

	fd = open(argv[1],O_RDONLY);
	if(fd == -1)
	{
		printf("Unable to open File");
		return -1;
	}
	else
	{
		while((ret = read(fd,arr,sizeof(arr)))>0)
		{
			printf("%c",*arr);
		}
		printf("\n");
	}
	close(fd);
	return 0;

}
