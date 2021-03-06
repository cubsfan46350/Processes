// Write a program that calls `fork()` and then calls some form of `exec()`
// to run the program `/bin/ls`. Try a few variants of `exec()`, such as 
// `execl()`, `execle()`, `execv()`, and others. Why do you think there 
// are so many variants of the same basic call?

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/wait.h>

int main(void)
{
    // Your code here
    int ret;    
    int example = fork();
    if (example == 0) {
        printf("This is the child\n");
    }
    else {
        printf("The Fork Failed\n");
    }
    ret = execl("/bin/ls", "ls", "-1", (char *)0);
    return 0;
}
