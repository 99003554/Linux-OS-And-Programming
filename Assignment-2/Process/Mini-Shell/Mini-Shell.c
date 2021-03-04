#include<unistd.h>
#include<sys/wait.h>
#include<stdlib.h>
#include<stdio.h>


void process()
{
    int ret,i,status;

    //Printing pid of thr process
	printf("Welcome..pid=%d\n",getpid());
    
    //Creating the fork or child process
	ret=fork();

    //Checking child process status is -ve
	if(ret<0)
	{
		perror("fork");
		exit(1);
	}

	//Checking child process status is equal to 0
    if(ret==0)
	{
		
        int k;
        char str[20];
        scanf("%s",str);
        k=execl("/usr/bin/pwd","pwd",NULL);
		if(k<0)
		{
			perror("execl");
			exit(1);
		
        }
        //Exit status which we are sending/returning to parent
        exit(5);
	}

	//If child is not -ve or 0 then this block will get executed
    else	
	{
		printf("Parent -- Hello,pid=%d, ppid=%d\n", getpid(),getppid());
        //Here we are making parent to wait for child to complete the process
		waitpid(1,&status,0); 
		printf("Parent -- Child exit status=%d\n",
		WEXITSTATUS(status));
	}
}


int main()
{
    //Calling the process() function
	process();
    return 0;
}