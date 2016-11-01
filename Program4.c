//
#include <stdlib.h>
#include <string.h>
#include <limits.h>
main(int argc, char *argv[])
{
    char *testpath = "/COS331/hw3/Porgram3.c";
    char actualPath [PATH_MAX+1];
    char *ptr;
    ptr = realpath(testpath, actualPath);
    printf("path: %s\n", actualPath);
}
