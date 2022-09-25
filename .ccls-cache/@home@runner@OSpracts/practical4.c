#include <stdio.h>
#include <sys/stat.h>
#include <time.h>

int main(int argc, char *argv[3])
{
int i;
struct stat buffer;
printf("Give File Name:");
for(i=1; i<argc; i++)
{
printf("file=%s\n", argv[i]);
//stat("foo",)
if(stat(argv[i], &buffer)<0)
{
printf("Error in file Started");
}
else
{
printf("owner: %d\ngid= %d\n", buffer.st_uid,
buffer.st_gid);
printf("Access Permission=%d\n", buffer.st_mode);
printf(" Last Access time= %s\n", ctime(&buffer.st_atime));
printf(" Last Modify time= %s\n", ctime(&buffer.st_mtime));
}
}
return 0;
}