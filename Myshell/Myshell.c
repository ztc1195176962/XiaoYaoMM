#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/wait.h>
#include<string.h>


int Split(char intput[],char *output[])
{
  char *p=strtok(intput," ");
  int i=0;
  while(p!=NULL)
  {
    output[i]=p;
    ++i;
   
    p=strtok(NULL," ");
  }
  return i;
}

void GreatProcess(char* argv[],int n)
{
  (void)n;
  pid_t ret=fork();

  if(ret>0)
  {
    wait(NULL);
  }else if(ret==0)
  {
    ret=execvp(argv[0],argv);
    if(ret<0)              
    {
      perror("exec");
      exit(0);
    }
  }else{
    perror("fork");
  }
}



int main()
{
  while(1)
  {
    printf("[ztc@location ~]$ ");
    fflush(stdout);

    char command[1024]={0};
    gets(command);

    char *argv[1024];
   int n= Split(command,argv);

    GreatProcess(argv,n);

  }
  return 0;
}


