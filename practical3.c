#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
int main()
{
int a;
printf("\nKernel Version");
system("cat /proc/sys/kernel/osrelease");
printf("\n configured free and used memory:\n");
system("cat /proc/meminfo | awk 'NR==1, NR==2 {print}'");
return 0;
}