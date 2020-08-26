#include <unistd.h>
#include <stdio.h>

int main()
{
    int fc = fork();
    int sc = fork();

    if (fc > 0 && sc > 0) {
        printf("This is Parent\n");
        printf("%d %d \n", fc, sc);
        printf("ID: %d \n", getpid());
    }
    else if (fc == 0 && sc > 0)
    {
        printf("Child 1\n");
        printf("%d %d \n", fc, sc);
        printf("ID: %d \n", getpid());
    }
    else if (fc > 0 && sc == 0)
    {
        printf("Child 2\n");
        printf("%d %d \n", fc, sc);
        printf("ID: %d \n", getpid());
    }
    else {
        printf("Child 3\n");
        printf("%d %d \n", fc, sc);
        printf("ID: %d \n", getpid());
    }
    return 0;
}
