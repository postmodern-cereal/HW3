//use fork and exec to execute program1.out
//print name and id first
//child prints name and id before call to exec
//parent should wait for child to terminate, then write message to screen

#include <stdio.h>
#include <sys/types.h>
#include <string.h>
#include <unistd.h>


//Main returns an int because make likes it better that way
int main(int argc, char *argv[])
{
    printf("\nThis is program 3. It prints its name and ID, and then runs program 1.\n");
    printf("Process name: %s\n", argv[0]);
    printf("Process ID: %d\n", getpid());
    int fk = fork();
    //child has 0 as return
    char *args[2];
    //char *path = "/home/postmodern_cereal/COS331/hw3/Program1.out";
    args[0] = "Program1.out";
    args[1] = NULL;
    if(!fk)
    {
        printf("Child process name: %s\n", argv[0]);
        printf("Child process ID: %d\n", getpid());
        
        printf("\n");
        execv(args[0], args);
        printf("Should not be here\n");
    }
    else
    {
        wait();
        printf("\nChild process complete. Parent exiting.\n");
    }
    return 0;
}
