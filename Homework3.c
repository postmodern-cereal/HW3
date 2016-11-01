#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <limits.h>
#include <unistd.h>
#include <sys/types.h>

int main(int argc, char *argv[])
{
    printf("This is Homework3, the master program. It runs program 3 and program 4 at once.\n");
    printf("Process name: %s\n", argv[0]);
    printf("Process ID: %d\n", getpid());
    printf("Homework3 will now execute program 3.\n");
    int fk = fork();
    if(!fk)
    {
        printf("\nChild process has name %s and ID %d.\n", argv[0], getpid());
        char *tmp[2];
        tmp[0] = "Program3.out";
        tmp[1] = NULL;
        execv(tmp[0], tmp);
    }
    else
    {
        wait();
        printf("\nSuccessfully executed program 3. Homework3 will now execute program 4.\n");
        fk = 0;
        fk = fork();
        if(!fk)
        {
            printf("\nChild process has name %s and ID %d.\n", argv[0], getpid());
            char *tmp[3];
            tmp[0] = "Program4.out";
            tmp[1] = (argc == 1) ? "12" : argv[1];
            tmp[2] = NULL;
            execv(tmp[0], tmp);
        }
        else
        {
            wait();
            printf("\nSuccessfully executed Program 3 and Program 4. Homework3 will now exit.\n\n");
        }
    }
    return 0;
}
