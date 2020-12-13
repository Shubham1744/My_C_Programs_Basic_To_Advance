#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>

int main(int argc,char* argv[])
{
	if(argc < 2)
	{
		printf("ERROR: Too few arguments");
		return -1;
	}
	else if(argc > 2)
	{
		printf("ERROR: Too many arguments");
		printf("Argument should be ./a.o 'filename'");
	}
	else
	{
		int fd = 0,ret = 0;
		char arr[100];
		const char* filename = argv[1];
		fd = open(filename,O_RDONLY);
		if(fd == -1)
		{
			printf("ERROR: unable to open");
			return -1;
		}
		else
		{
			int n = 0;
			printf("\nEnter bytes you want to read :\n");
			scanf("%d",&n);
			ret = read(fd,arr,n);
			printf("\nReaded data from bytes are :\n");
			write(1,arr,ret);
			printf("\n");
		}
		close(fd);
		return 0;
	}
	
}
