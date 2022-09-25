#include <stdlib.h>
#include <stdio.h>

int main()
{
printf("\nKernel Version");
system("cat /proc/sys/kernel/osrelease");
printf("\n the cpu info \n");
system("cat /proc/cpuinfo");
return 0;
}