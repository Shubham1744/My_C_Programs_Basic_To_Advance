#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
int main(int argc,char *argv[])
{
    int fd;
    fd = open(argv[1],O_RDONLY);
	if(fd == -1)
    {
		printf("Unable to open the file\n");
    }
    else
    {
		printf("File is successfully opened \n");
    }
    close(fd);
    return 0;
}
