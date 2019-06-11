//File-copy program which copies text, .com and .exe files
#include<fcntl.h>
#include<stdio.h>
#include <stat.h>

main(int argc, char *argv[])
{
	char buffer[512];
	int inhandle, outhandle, bytes;
	
	inhandle=open(argv[1], O_RDONLY|O_BINARY);
	if(inhandle==-1)
	{
		puts("Cannot open file.");
		exit(0);
	}
	
	outhandle=open(argv[2], O_CREAT|O_BINARY|O_WRONLY, S_IWRITE);
	if(inhandle==-1)
	{
		puts("Cannot open file");
		exit(0);
	}
	
	while(1)
	{
		bytes=read(inhandle, buffer, 512);
		
		 if(bytes>>0)
		 	write(outhandle, buffer, bytes);
		else
		break;
	}
	close(inhandle);
	close(outhandle);
}
