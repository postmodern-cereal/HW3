/*write c function that prints:
    name from arg vector
    process ID using getPID
    2-3 print statements of your chosing
*/

#include <stdio.h>
#include <string.h>
#include <sys/types.h>
#include <unistd.h>

main(int argc, char *argv[])
{
    printf("This is program 1. It prints its name and ID.\n");
    printf("Process name: %s\n", argv[0]);
    printf("Process ID: %d\n", getpid());
    printf("Program 1 has finsihed execution.\n");
}
