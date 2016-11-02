//
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <limits.h>
#include <unistd.h>

int main(int argc, char *argv[])
{
    //You may optionally imput a value for N in the command line. If you chose not to,
    //the program will default to 12.
    /*char *testpath = "/COS331/hw3/Porgram3.c";
    char actualPath [PATH_MAX+1];
    char *ptr;
    ptr = realpath(testpath, actualPath);
    printf("path: %s\n", actualPath);*/
    printf("\nThis is program 4. It prints its name and ID, and then runs program 2.\n");
    char *args[3];
    args[0] = "Program2.out";
    args[1] = (argc == 1) ? "12" : argv[1];
    args[2] = NULL;
    printf("Process name: %s\n", argv[0]);
    printf("Process ID: %d\n", getpid());
    
    int fk = fork();
    if(!fk)
    {
        printf("Child process name: %s\n", argv[0]);
        printf("Child process ID: %d\n", getpid());
        printf("\n");

        execv(args[0], args);
    }
    else
    {
        wait();
        printf("\nChild process complete. Parent exiting.\n");
    }
    return 0;
}
