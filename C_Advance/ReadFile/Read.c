#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>

int main(int argc, char *argv[])
{
	int fd = 0,ret = 0;
	char arr[11];

	fd = open(argv[1],O_RDONLY);

	ret = read(fd,arr,4);
	write(1,arr,ret);	//(STDOUT(on what),Buffer(from what),bytes to write(How much))
	//printf("Data from the file is %s\n",arr);

	return 0;

}
