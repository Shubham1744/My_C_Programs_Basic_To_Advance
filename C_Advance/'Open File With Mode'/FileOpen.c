
// Write a program which accept file name and mode from user and then open that file in specified mode.

#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#include<string.h>
int main(int argc, char* argv[])
{
   int fd = 0;
   if(argc < 3)
   {
   	printf("Error : Insufficient Arguments");
   	printf("Arguments should be ./a.o arg1 arg2");
   }
   else if(argc>3)
   {
   	printf("Error : Too many arguments");
   	printf("Arguments should be ./a.o arg1 arg2");
   }
   else
   {
   	const char* filename = argv[1];
   	const char* mode = argv[2];

   	char* arr = "O_RDONLY";
   	char* brr = "O_WRONLY";
   	char* crr = "O_RDWR";
   	if((strcmp(arr,argv[2]) == 0))
	{
		fd = open(filename,O_RDONLY);

		if(fd == -1)
   		{
     			printf("Error : File Not Found");
   		}
   		else
   		{
   	   		printf("File opened in %s Successfully with File Descriptor %d",mode,fd);
   		}
	}
	else if(strcmp(brr,argv[2]) == 0)
	{
		fd = open(filename,O_WRONLY);
		if(fd == -1)
   		{
     			printf("Error : File Not Found");
   		}
   		else
   		{
   	   		printf("File opened in %s Successfully with File Descriptor %d",mode,fd);
   		}
	}
	else if(strcmp(crr,argv[2]) == 0)
	{
		fd = open(filename,O_RDWR);
		if(fd == -1)
   		{
     			printf("Error : File Not Found");
   		}
   		else
   		{
   	   		printf("File opened in %s Successfully with File Descriptor %d",mode,fd);
   		}
	}
	else
	{
		printf("No Such Mode");
}
   	}
   	close(fd);
   	return 0;
}
