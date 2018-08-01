#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<string.h>
int main(void)
{
char stg[256],stg1[256],cmd[100],cmd1[100];
system("rm log.txt");

while(strcmp(stg,"exit")!=0)
{
printf("Arya>>");
gets(stg);

if(strcmp(stg,"mys")==0)
{
printf("MyScript Started, file is log.txt\n");
sprintf(cmd,"echo MyScript Started on date>>log.txt");
system(cmd);

while(strcmp(stg1,"exit")!=0)
{
printf("Hey>>");
gets(stg1);
sprintf(cmd,"%s >> log.txt",stg1);
//sprintf(cmd1,"echo %s >> log.txt",stg1);
system(stg1);
//system(cmd1);
system(cmd);
}
printf("MyScript has ended!\n");

}

else 
{
system(stg);
}

}
printf("The Process Has Ended!\n");
return 0;
}

