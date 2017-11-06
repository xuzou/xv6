#include "user.h"
#define CHILD_NUMBER 5
#define N  100
#include "proc.h"

void
print_sth(void)
{
    int i;
    for (i = 0; i < N; i++) {
        int pid = getpid();
	int prio = getprio();
        printf(1, "%d\n", pid);
	printf(1, "priority: %d\n", prio);
    }

}

void
test(void)
{

    int cid;
    printf(1, "TEST BEGINS!!!!!!!!!!!!!!!!\n");
    for (cid = 0; cid < CHILD_NUMBER; cid++) {
        int child = fork();
	if(child == 0)
	{
	printf(1, "************************************************************new process %d*************************************************\n", cid);
	if(cid == 2){
	nice();
}
              print_sth();
	    exit();
	}
	else
	{
	printf(1, "++++++++++++PARENT PROCESS RUNNING++++++++++++++\n");
        }
    }
}
int
main(void)
{
    test();
    exit();
}
