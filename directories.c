// C program to list all directories.
#include <stdio.h>

int main()
{
#ifdef _WIN32
	system("dir");
#else
	system("ls");
#endif
	return 0;
}
