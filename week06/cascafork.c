/* cascafork (c) 2008 Rahmat M. Samik-Ibrahim, GPL-like
*/
/*********************************************************** */
#include <sys/types.h>
#include <sys/wait.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#define DISPLAY "This is PID[%5.5d]\n"
main(void) {
    if (fork() != (pid_t) 0) {
        sleep(1);
        if (fork() == (pid_t) 0) {
            sleep(1);
            if (fork() != (pid_t) 0) {
                sleep(1);
                if (fork() == (pid_t) 0) {
                    sleep(1);
                }
            }
        }
    }
    printf(DISPLAY, (int) getpid());
    waitpid(-1,NULL,0);
    waitpid(-1,NULL,0);
    exit (0);
}
/************************************************************/