//print name, then statement n times

#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <string.h>
#include <math.h>

main(int argc, char *argv[])
{
    int num = 0;
    printf("\nThis is program 2. It prints its name, ID, and N custom print statements.\n");
    printf("Process name: %s\n", argv[0]);
    printf("Process ID: %d\n\n", getpid());
    if(argc < 2)
    {
        //if you reach the inside of this statement, then you did not provide enough arguments
        //for the program. Should not happen if this program was called by Program4.
        printf("Too few command line arguments. Exiting.");
        return;
    }
    char *n = argv[1];
    int i = strlen(argv[1]);
    while(n != NULL && i > 0)
    {
        num+=(int)((*n-48)*(int)pow(10,i-1));
        //printf("%c", *n);
        n++;
        i--;
    }
    for(i = num; i > 0; i--)
    {
        printf("Program 2 is printing. %d prints remaining.\n", i);
    }

    printf("\nN = %d\n", num);
}
