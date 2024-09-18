#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
int main()
{
printf("Before fork\n");
pid_t p=fork();
printf("My id is:%d\n",getpid());
printf("Done\n");
return 0;
}
